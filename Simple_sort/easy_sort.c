/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:17:34 by tmiguel-          #+#    #+#             */
/*   Updated: 2023/02/27 12:17:34 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	tree_sort(t_stack **list_a)
{
	while (ft_sorted(list_a) != 1)
	{
		if (((*list_a)->index > (*list_a)->next->index)
			&& ((*list_a)->index < (*list_a)->next->next->index))
			fun_sa(list_a);
		else if (((*list_a)->index > ((*list_a)->next->index))
			&& ((*list_a)->index > (*list_a)->next->next->index))
			fun_ra(list_a);
		else
			fun_rra(list_a);
	}
}

static void	four_sort(t_stack **list_a, t_stack **list_b)
{
	if (order(list_a, 4) == 1)
		return ;
	rotate_to_first(list_a, 4);
	fun_pb(list_b, list_a);
	index_reset(list_a);
	tree_sort(list_a);
	fun_pa(list_a, list_b);
}

void	easy_sort(t_stack **list_a, t_stack **list_b)
{
	int	size;

	size = size_list(*list_a);
	if (size == 3)
		tree_sort(list_a);
	else if (size == 4)
		four_sort(list_a, list_b);
	{
		if (order(list_a, 5) == 1)
			return ;
		rotate_to_first(list_a, 5);
		fun_pb(list_b, list_a);
		index_reset(list_a);
		four_sort(list_a, list_b);
		fun_pa(list_a, list_b);
	}
}
