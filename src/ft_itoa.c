/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:35:47 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/15 18:35:48 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 1)
	{
		n /= 10;
		i++;
	}
	return (i == 0 ? 1 : i);
}

char		*ft_itoa(int n)
{
	char	*string;
	int		lenght;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	lenght = ft_intlen(n);
	string = (char *)malloc(sizeof(char) * (lenght + 1));
	if (string)
	{
		string[0] = '\0';
		string[lenght] = '\0';
		if (n < 0)
		{
			string[0] = '-';
			n *= -1;
		}
		while (--lenght > (string[0] == '-' ? 0 : -1))
		{
			string[lenght] = n % 10 + '0';
			n /= 10;
		}
		return (string);
	}
	return (NULL);
}
