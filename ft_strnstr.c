/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 22:51:30 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/11 09:43:21 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	char		*ptr;

	i = 0;
	j = 0;
	ptr = (char*)big;
	if (little[0] == '\0' || little == NULL)
		return (ptr);
	while (big[i] != '\0' && i < len)
	{
		while (little[j] != '\0' && big[i + j] == little[j] && (i + j < len))
		{
			j++;
			if (little[j] == '\0')
				return (&(ptr[i]));
		}
		i++;
		j = 0;
	}
	return (NULL);
}
