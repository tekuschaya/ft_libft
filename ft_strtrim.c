/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 22:44:41 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/09 10:48:21 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_beginning(char const *s1, char const *set)
{
	int start;
	int i;

	i = 0;
	start = 0;
	while (*s1 && set[i])
	{
		if (*s1 == set[i])
		{
			s1++;
			start++;
			i = 0;
		}
		else
			i++;
	}
	if (*s1 && i == (int)ft_strlen(set))
		return (start);
	return (-1);
}

static int		ft_end(char const *s1, char const *set)
{
	int end;
	int i;

	end = 0;
	i = 0;
	s1 = s1 + ft_strlen(s1) - 1;
	while (*s1 && set[i])
	{
		if (*s1 == set[i])
		{
			s1--;
			end++;
			i = 0;
		}
		else
			i++;
	}
	if (*s1 && i == (int)ft_strlen(set))
		return (end);
	return (-1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		len;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = ft_beginning(s1, set);
	if (start < 0)
		return (ft_strdup(""));
	end = ft_end(s1, set);
	len = (int)ft_strlen(s1);
	res = (char*)malloc(len - start - end + 1);
	if (res)
	{
		while (start < len - end)
			res[i++] = s1[start++];
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
