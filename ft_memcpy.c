/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 18:22:03 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/09 01:08:43 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *ptr;
	unsigned char *ptr1;

	ptr = (unsigned char*)src;
	ptr1 = (unsigned char*)dst;
	if (!ptr && !ptr1)
		return (NULL);
	while (n != 0)
	{
		*ptr1++ = *ptr++;
		n--;
	}
	return (dst);
}
