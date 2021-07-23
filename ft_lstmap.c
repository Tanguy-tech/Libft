/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 16:04:59 by tbillon           #+#    #+#             */
/*   Updated: 2021/07/23 08:56:04 by tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_el;

	if (!lst || !f)
		return (0);
	new = 0;
	while (lst)
	{
		new_el = ft_lstnew((*f)(lst->content));
		if (!(new_el))
		{
			ft_lstclear(&new_el, del);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, new_el);
		lst = lst->next;
	}
	return (new);
}
