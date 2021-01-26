/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 17:59:15 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/08 10:05:05 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	unsigned char *ptr;

	ptr = (unsigned char *)memptr;
	while (num != 0)
	{
		*ptr = (unsigned char)val;
		ptr++;
		num--;
	}
	return (memptr);
}
