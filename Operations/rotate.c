/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:17:57 by tmiguel-          #+#    #+#             */
/*   Updated: 2023/02/27 12:17:58 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **list)
{
	t_stack	*lst;

	if (!(*list) | !(*list)->next)
		return ;
	lst = list_last(*list);
	lst->next = *list;
	*list = (*list)->next;
	(*list)->prev = NULL;
	lst->next->prev = lst;
	lst->next->next = NULL;
}

void	fun_ra(t_stack **list_a)
{
	rotate(list_a);
	ft_printf("ra\n");
}

void	fun_rb(t_stack **list_b)
{
	rotate(list_b);
	ft_printf("rb\n");
}

void	fun_rr(t_stack **list_a, t_stack **list_b)
{
	rotate(list_a);
	rotate(list_b);
	ft_printf("rr\n");
}
