/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:17:45 by tbillon           #+#    #+#             */
/*   Updated: 2021/07/23 08:56:26 by tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
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
	if (list->next == NULL)
		i++;
	return (i);
}
