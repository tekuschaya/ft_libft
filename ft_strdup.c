/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 21:05:45 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/08 10:24:16 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*str1;

	i = 0;
	str1 = (char*)malloc(ft_strlen(str) + 1);
	if (str1)
	{
		while (str[i])
		{
			str1[i] = str[i];
			i++;
		}
		str1[i] = '\0';
		return (str1);
	}
	return (NULL);
}
