/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:32:07 by tbillon           #+#    #+#             */
/*   Updated: 2021/07/23 08:55:51 by tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	t_list	*list;

	i = 0;
	list = lst;
	if (!lst)
		return (0);
	while (list->next != NULL)
	{
		i++;
		list = list->next;
	}
	return (list);
}
