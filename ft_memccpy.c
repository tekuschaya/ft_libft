/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 00:20:32 by odhazzar          #+#    #+#             */
/*   Updated: 2020/11/28 21:08:50 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memccpy(void *dst, const void *src, int c, size_t n) 
{
	unsigned char *ptr;
	unsigned char *ptr1;

	ptr = (unsigned char*)src;
	ptr1 = (unsigned char*)dst;
	while (n != 0)
	{
		if (*ptr == (unsigned char)c)
		{
			*ptr1 = *ptr;
			ptr1++;
			return (ptr1);
		}
		*ptr1++ = *ptr++;
		n--;
	}
	return (NULL);
}
