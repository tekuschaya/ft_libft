/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 16:41:13 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/09 10:28:11 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	size = (int)ft_strlen(s) - (int)start;
	if (size <= 0)
		return (ft_strdup(""));
	if ((unsigned int)size < len)
		len = (unsigned int)size;
	str = (char*)malloc(len + 1);
	if (str)
	{
		while (len > 0)
		{
			str[i++] = s[start++];
			len--;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
