/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 18:50:26 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/09 03:12:35 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	size_t	sum;
	void	*ptr;

	sum = number * size;
	ptr = malloc(sum);
	if (ptr)
	{
		ft_bzero(ptr, sum);
		return (ptr);
	}
	return (NULL);
}
