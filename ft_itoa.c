/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 16:47:09 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/09 04:43:06 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n, int sign)
{
	int i;

	i = 1;
	while (n /= 10)
		i++;
	if (sign < 0)
		return (i + 1);
	return (i);
}

static char	*ft_divide(char *str, int n, int sign, int len)
{
	str[len--] = '\0';
	while (n)
	{
		str[len--] = n % 10 + '0';
		n /= 10;
	}
	if (sign < 0)
		str[len] = '-';
	return (str);
}

char		*ft_itoa(int n)
{
	int		sign;
	int		len;
	char	*str;

	sign = 1;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < -2147483647)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		sign = -1;
		n = n * -1;
	}
	len = ft_len(n, sign);
	str = (char*)malloc(len + 1);
	if (str)
	{
		str = ft_divide(str, n, sign, len);
		return (str);
	}
	return (NULL);
}
