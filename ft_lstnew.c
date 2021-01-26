/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 13:28:14 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/08 13:28:30 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *list;

	list = (t_list*)malloc(sizeof(t_list));
	if (list)
	{
		(*list).content = content;
		(*list).next = NULL;
		return (list);
	}
	return (NULL);
}
