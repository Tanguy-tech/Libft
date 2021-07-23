/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:40:30 by tbillon           #+#    #+#             */
/*   Updated: 2021/07/23 08:59:07 by tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_;
	unsigned char	*s2_;

	i = 0;
	s1_ = (unsigned char *)s1;
	s2_ = (unsigned char *)s2;
	if (n == 0)
		return (0);
	if (n > 0)
	{
		while (s1_[i] && s2_[i] && i < n - 1)
		{
			if (s1_[i] != s2_[i])
				return (s1_[i] - s2_[i]);
			i++;
		}
	}
	return (s1_[i] - s2_[i]);
}
