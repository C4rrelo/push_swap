/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:20:25 by tmiguel-          #+#    #+#             */
/*   Updated: 2023/03/06 10:32:34 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	brotate(t_stack **list)
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

void	bfun_ra(t_stack **list_a)
{
	brotate(list_a);
}

void	bfun_rb(t_stack **list_b)
{
	brotate(list_b);
}

void	bfun_rr(t_stack **list_a, t_stack **list_b)
{
	brotate(list_a);
	brotate(list_b);
}
