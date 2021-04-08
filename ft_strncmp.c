/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:38:49 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/15 18:38:50 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	if (n <= 0)
		return (0);
	index = 0;
	while (index < n)
	{
		if ((unsigned char)s1[index] == 0 || (unsigned char)s2[index] == 0)
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		if ((unsigned char)s1[index] != (unsigned char)s2[index])
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		index++;
	}
	return (0);
}
