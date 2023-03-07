/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:23:19 by tmiguel-          #+#    #+#             */
/*   Updated: 2023/02/27 12:23:20 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *str1, char const *str2, size_t size)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (str2[i] != '\0')
	{
		i++;
	}
	if (size != 0)
	{
		while (str2[x] != '\0' && x < size - 1)
		{
		str1[x] = str2[x];
		x++;
		}
		str1[x] = '\0';
	}
	return (i);
}
