/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:52:09 by tbillon           #+#    #+#             */
/*   Updated: 2021/07/23 08:58:34 by tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	unsigned char	*dest;

	i = 0;
	j = 0;
	dest = (unsigned char *)dst;
	if (!dest || !src)
		return (0);
	if (dstsize == 0)
	{
		while ((unsigned char)src[i])
			i++;
		return (i);
	}
	while (i < dstsize - 1 && (unsigned char)src[i])
	{
		dest[i] = (unsigned char)src[i];
		i++;
	}
	dest[i] = '\0';
	while ((unsigned char)src[i])
		i++;
	return (i);
}
