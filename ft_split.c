/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:25:34 by tbillon           #+#    #+#             */
/*   Updated: 2021/07/23 08:57:41 by tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(char c1, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
	{
		if (c1 == charset[i])
			return (1);
	}
	return (0);
}

int	count_words(char *str, char *c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*str)
	{
		if (is_sep(*str, c) && i > 0)
		{
			count++;
			i = 0;
		}
		else if (!is_sep(*str, c))
			i++;
		str++;
	}
	if (i > 0)
		count++;
	return (count);
}

int	word_len(char *str, char *end)
{
	int	i;

	i = 0;
	while (!is_sep(str[i], end) && str[i])
		i++;
	return (i);
}

char	*set_word(char *str, char *sep)
{
	int		i;
	int		size_w;
	char	*word;

	i = 0;
	size_w = word_len(str, sep);
	word = malloc(sizeof(char) * (size_w + 1));
	if (!(word))
		return (0);
	while (i < size_w && str[i])
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *s, char *c)
{
	char	**tab;
	char	*str;
	int		i;
	int		nb_words;

	if (!s)
		return (0);
	str = (char *)s;
	nb_words = count_words(str, c);
	tab = malloc(sizeof(char *) * (nb_words + 1));
	if (!(tab))
		return (0);
	i = -1;
	while (++i < nb_words && *str)
	{
		while (is_sep(*str, c) && *str)
			str++;
		if (!is_sep(*str, c) && *str)
		{
			tab[i] = set_word(str, c);
			str = str + word_len(str, c);
		}
	}
	tab[i] = 0;
	return (tab);
}
