/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 15:25:41 by odhazzar          #+#    #+#             */
/*   Updated: 2020/11/10 11:03:56 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_ll(long long int res, int sign, char c)
{
	long long int res_new;

	res_new = res * 10 + c - 48;
	if (res_new < res && sign == -1)
		return (0);
	else if (res_new < res && sign == 1)
		return (-1);
	return (1);
}

int			ft_atoi(const char *str)
{
	long long int	res;
	int				i;
	int				n;
	

	i = 0;
	res = 0;
	n = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '+' || str[i] == '-')
	{
		if ((str[i] == '+' || str[i] == '-')
				&& (str[i + 1] < 48 || str[i + 1] > 57))
			return (res);
		if ((str[i]) == '-')
			n = -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		if (check_ll(res, n, str[i]) <= 0)
			return (check_ll(res, n, str[i]));
		res = res * 10 + str[i++] - 48;
	}
	return ((int)res * n);
}
