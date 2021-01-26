/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 16:47:56 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/09 10:44:45 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = (char*)malloc(ft_strlen(s) + 1);
	if (res)
	{
		while (*s)
		{
			res[i] = f(i, *s);
			i++;
			s++;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
