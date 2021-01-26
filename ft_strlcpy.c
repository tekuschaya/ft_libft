/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 14:33:12 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/09 12:11:54 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t d)
{
	size_t i;

	i = 0;
	if (!dest || !src)
		return (i);
	while (src[i] != '\0')
		i++;
	if (d == 0)
		return (i);
	while (*src && d - 1 > 0)
	{
		*dest = *src;
		dest++;
		src++;
		d--;
	}
	*dest = '\0';
	return (i);
}
