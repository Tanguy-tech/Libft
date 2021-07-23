/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:06:33 by tbillon           #+#    #+#             */
/*   Updated: 2021/07/23 09:00:00 by tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *str, int begin, int len_max)
{
	int		i;
	char	*new;

	i = 0;
	new = ft_calloc(len_max + 1, sizeof(char));
	if (!(new))
		return (0);
	while (str[begin] && i < len_max)
	{
		new[i] = str[begin];
		i++;
		begin++;
	}
	return (new);
}
