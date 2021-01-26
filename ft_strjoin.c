/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 16:42:27 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/09 11:13:18 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	char *ptr;

	if (!s1 || !s2)
		return (NULL);
	str = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str)
	{
		ptr = (char*)str;
		if (*s1)
			while (*s1)
				*ptr++ = *s1++;
		if (*s2)
			while (*s2)
				*ptr++ = *s2++;
		*ptr = '\0';
		return (str);
	}
	return (NULL);
}
