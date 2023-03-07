/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:20:19 by tmiguel-          #+#    #+#             */
/*   Updated: 2023/03/06 10:32:22 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

static void	swap(t_stack **lst)
{
	int	index;
	int	content;

	if (!(*lst)->next)
		return ;
	content = (*lst)->next->content;
	index = (*lst)->next->index;
	(*lst)->next->content = (*lst)->content;
	(*lst)->next->index = (*lst)->index;
	(*lst)->content = content;
	(*lst)->index = index;
}

void	bfun_sa(t_stack **list_a)
{
	swap(list_a);
}

void	bfun_sb(t_stack **list_b)
{
	swap(list_b);
}

void	bfun_ss(t_stack **list_a, t_stack **list_b)
{
	swap(list_a);
	swap(list_b);
}
