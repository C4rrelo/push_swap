/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:20:32 by tmiguel-          #+#    #+#             */
/*   Updated: 2023/03/06 10:32:00 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	breverse(t_stack **stack)
{
	t_stack	*lst;

	if (!(*stack) || !(*stack)->next)
		return ;
	lst = list_last(*stack);
	lst->prev->next = NULL;
	lst->prev = NULL;
	lst->next = *stack;
	(*stack)->prev = lst;
	*stack = (*stack)->prev;
}

void	bfun_rra(t_stack **list_a)
{
	breverse(list_a);
}

void	bfun_rrb(t_stack **list_b)
{
	breverse(list_b);
}

void	bfun_rrr(t_stack **list_a, t_stack **list_b)
{
	breverse(list_a);
	breverse(list_b);
}
