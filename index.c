/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:17:19 by tmiguel-          #+#    #+#             */
/*   Updated: 2023/02/27 12:17:19 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_index(t_stack **list)
{
	t_stack	*tmp;
	t_stack	*select;

	tmp = *list;
	while (tmp)
	{
		tmp->index = 0;
		select = *list;
		while (select)
		{
			if (tmp != select && tmp->content > select->content)
				tmp->index++;
			select = select->next;
		}
		tmp = tmp->next;
	}
}
