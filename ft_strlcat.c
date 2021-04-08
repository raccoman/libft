/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:38:33 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/15 18:38:34 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	temp_size;
	size_t	res;

	temp_size = dstsize;
	i = 0;
	while (dstsize != 0 && dst[i] != '\0')
	{
		dstsize--;
		i++;
	}
	if (dstsize == 0)
		return (temp_size + ft_strlen(src));
	res = ft_strlen(dst) + ft_strlen(src);
	temp_size -= ft_strlen(dst);
	j = 0;
	while (temp_size-- > 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
