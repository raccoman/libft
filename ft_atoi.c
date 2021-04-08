/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:33:29 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/15 18:33:33 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
	|| c == '\f' || c == '\r' || c == ' ');
}

int			ft_atoi(const char *str)
{
	int			i;
	long long	res;
	int			signe;

	i = 0;
	res = 0;
	signe = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		if (res < 0 && signe < 0)
			return (0);
		if (res < 0 && signe > 0)
			return (-1);
		i++;
	}
	return (res * signe);
}
