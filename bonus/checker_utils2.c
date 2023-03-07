/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:20:10 by tmiguel-          #+#    #+#             */
/*   Updated: 2023/03/01 10:20:10 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	bcheck_doubles(t_stack *list)
{
	int		tmp;
	t_stack	*clone;

	while (list != NULL && list->next != NULL)
	{
		tmp = list->content;
		clone = list;
		while (clone->next != NULL)
		{
			clone = clone->next;
			if (clone->content == tmp)
				return (0);
		}
		list = list->next;
	}
	return (1);
}

void	lst_addfront(t_stack **list, t_stack *news)
{
	if (!list || !news)
		return ;
	if (!(*list))
	{
		*list = news;
		(*list)->prev = NULL;
		(*list)->next = NULL;
		return ;
	}
	(*list)->prev = news;
	news->next = *list;
	*list = news;
	news->prev = NULL;
}

t_stack	*list_last(t_stack *list)
{
	if (!list)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

int	size_list(t_stack *list)
{
	int		i;
	t_stack	*tmp;

	tmp = list;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
