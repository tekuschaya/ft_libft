/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:31:18 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/08 10:00:21 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memptr, int val, size_t num)
{
	unsigned char *ptr;

	ptr = (unsigned char*)memptr;
	while (num--)
	{
		if (*ptr == (unsigned char)val)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
