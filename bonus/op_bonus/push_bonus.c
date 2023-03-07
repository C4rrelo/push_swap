/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:20:40 by tmiguel-          #+#    #+#             */
/*   Updated: 2023/03/06 10:32:07 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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

void	bfun_pa(t_stack **list_a, t_stack **list_b)
{
	push(list_a, list_b);
}

void	bfun_pb(t_stack **list_b, t_stack **list_a)
{
	push(list_b, list_a);
}
