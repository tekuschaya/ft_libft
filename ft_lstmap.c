/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 16:26:35 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/08 21:56:43 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlist;
	t_list *first;

	if (!lst || !f)
		return (NULL);
	if (!(newlist = ft_lstnew(f(lst->content))))
	{
		ft_lstdelone(newlist, del);
		return (NULL);
	}
	first = newlist;
	lst = lst->next;
	while (lst)
	{
		if (!(newlist = ft_lstnew(f(lst->content))))
		{
			ft_lstdelone(newlist, del);
			ft_lstclear(&first, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&first, newlist);
	}
	return (first);
}
