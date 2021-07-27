/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 09:35:51 by tanguy            #+#    #+#             */
/*   Updated: 2021/07/27 09:36:16 by tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (base[i + 1] == '\0' || base[i] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if ((base[j] == '-' || base[j] == '+')
				|| (base[j] >= 9 && base[j] <= 13)
				|| (base[j] == 32) || base[i] == base[j])
				return (0);
			if ((base[i] == '-' || base[i] == '+')
				|| (base[i] >= 9 && base[i] <= 13))
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	translate(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	check_white_space(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == 32)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	calc;
	int	len;
	int	neg;

	i = 0;
	neg = 0;
	calc = 0;
	len = size_len(base);
	if (check_is_valid(base) == 1)
	{
		while (str[i] != '\0')
		{
			i = check_white_space(str);
			while (str[i] == '-' || str[i] == '+')
				if (str[i++] == '-')
					neg++;
			while (str[i] != '\0')
				calc = (calc * len + (translate(str[i++], base)));
			if (neg % 2 == 1)
				calc = calc * -1;
			return (calc);
		}
	}
	return (0);
}
