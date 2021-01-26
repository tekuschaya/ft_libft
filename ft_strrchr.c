/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 17:18:55 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/11 14:04:24 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *ptr;

	ptr = (char*)str;
	while (*ptr)
		ptr++;
	if ((char)c == '\0')
		return (ptr);
	ptr--;
	while (*ptr != *str)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr--;
	}
	if (*ptr == (char)c)
		return (ptr);
	return (ptr = NULL);
}
