/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:18:18 by tmiguel-          #+#    #+#             */
/*   Updated: 2023/02/27 12:18:19 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_stack **list_a, t_stack **list_b)
{
	t_stack	*tmp;

	if (!list_b || !(*list_b))
		return ;
	tmp = (*list_b)->next;
	lst_addfront(list_a, *list_b);
	*list_b = tmp;
	if (*list_b)
		(*list_b)->prev = NULL;
}

void	fun_pa(t_stack **list_a, t_stack **list_b)
{
	push(list_a, list_b);
	ft_printf("pa\n");
}

void	fun_pb(t_stack **list_b, t_stack **list_a)
{
	push(list_b, list_a);
	ft_printf("pb\n");
}
