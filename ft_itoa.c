/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:47:54 by tbillon           #+#    #+#             */
/*   Updated: 2021/07/23 08:55:15 by tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = ft_sizenum(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!(res))
		return (0);
	res[len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		if (n == -2147483648)
		{
			res[1] = '2';
			n += 2000000000;
		}
		n *= -1;
	}
	while (n != 0)
	{
		res[--len] = (n % 10) + 48;
		n = n / 10;
	}
	return (res);
}
