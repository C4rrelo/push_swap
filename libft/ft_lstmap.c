/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:20:28 by tmiguel-          #+#    #+#             */
/*   Updated: 2023/02/27 12:20:28 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux_list;
	t_list	*hold;

	if (!lst)
		return (0);
	aux_list = 0;
	while (lst)
	{
		hold = ft_lstnew(f(lst->content));
		if (!hold)
		{
			ft_lstclear(&aux_list, del);
			return (0);
		}
		ft_lstadd_back(&aux_list, hold);
		lst = lst->next;
	}
	return (aux_list);
}
