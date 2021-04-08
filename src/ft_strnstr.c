/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:38:52 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/15 18:38:54 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t k;
	size_t needlelen;

	i = 0;
	needlelen = ft_strlen(needle);
	if (needle == NULL || *needle == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		k = 0;
		while (i + k < len && needle[k]
		&& haystack[i + k] && haystack[i + k] == needle[k])
			k++;
		if (k == needlelen)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
