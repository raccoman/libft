/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:36:52 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/15 18:36:54 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	int				lenght;

	if (!dst && !src)
		return (NULL);
	lenght = len;
	if (dst > src)
	{
		while (lenght > 0)
		{
			((char *)dst)[lenght - 1] = ((char *)src)[lenght - 1];
			lenght--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
