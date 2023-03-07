/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:23:12 by tmiguel-          #+#    #+#             */
/*   Updated: 2023/02/27 12:23:13 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *str1, char const *str2, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	j = 0;
	while (str1[j] != '\0' && j < size)
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(str2);
	if (size == 0 || size <= dlen)
	{
		return (slen + size);
	}
	while (str2[i] != '\0' && i < size - dlen - 1)
	{
		str1[j] = str2[i];
		i++;
		j++;
	}
	str1[j] = '\0';
	return (dlen + slen);
}
