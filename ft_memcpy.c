/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:36:45 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/15 18:36:46 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destination;
	const unsigned char	*source;

	if (!dst && !src)
		return (NULL);
	i = 0;
	destination = dst;
	source = src;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}
