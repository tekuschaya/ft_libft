/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 16:45:56 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/09 10:53:02 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free(char **arr, int str)
{
	int i;

	i = 0;
	while (i < str)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int		ft_count_str(char *ptr, char c)
{
	int len;

	len = 0;
	while (*ptr && *ptr == c)
		ptr++;
	while (*ptr && *ptr != c)
	{
		ptr++;
		len++;
	}
	return (len);
}

static int		ft_count_line(char *ptr, char c)
{
	int count;

	count = 0;
	while (*ptr)
	{
		if (*ptr != c)
		{
			while (*ptr && *ptr != c)
				ptr++;
			count++;
		}
		while (*ptr && *ptr == c)
			ptr++;
	}
	return (count + 1);
}

static char		*ft_line(char *arr, char *ptr, char c)
{
	int j;

	j = 0;
	while (*ptr == c)
	{
		ptr++;
		if (!*ptr)
			return (NULL);
	}
	while (*ptr && *ptr != c)
		arr[j++] = *ptr++;
	arr[j] = '\0';
	return (ptr);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	char	*ptr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	ptr = (char*)s;
	if (!(arr = (char**)malloc(sizeof(char*) * ft_count_line(ptr, c))))
		return (NULL);
	while (*ptr)
	{
		arr[i] = (char*)malloc(ft_count_str(ptr, c) + 1);
		if (!arr[i])
		{
			ft_free(arr, i);
			return (NULL);
		}
		if (!(ptr = ft_line(arr[i], ptr, c)))
			break ;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
