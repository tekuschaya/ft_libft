/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:41:15 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/10 17:25:40 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t d)
{
	size_t		result;
	char		*ptr1;

	if (d < ft_strlen(dest))
		return (result = d + ft_strlen(src));
	else
		result = ft_strlen(dest) + ft_strlen(src);
	ptr1 = (char*)dest;
	while (*ptr1 && d > 1)
	{
		ptr1++;
		d--;
	}
	if (d > 1)
	{
		while (*src && d-- > 1)
			*ptr1++ = *src++;
		*ptr1 = '\0';
	}
	return (result);
}
