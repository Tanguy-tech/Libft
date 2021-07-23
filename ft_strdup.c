/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:38:10 by tbillon           #+#    #+#             */
/*   Updated: 2021/07/23 08:58:04 by tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tab;
	int		len_s1;
	int		i;

	len_s1 = 0;
	i = 0;
	while (s1[len_s1])
		len_s1++;
	tab = malloc(sizeof(char) * (len_s1 + 1));
	if (!(tab))
		return (0);
	while (i < len_s1)
	{
		tab[i] = s1[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
