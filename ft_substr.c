/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:39:11 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/15 18:39:13 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	ssize;
	size_t	subsize;
	size_t	newsize;

	if (!s)
		return (NULL);
	ssize = ft_strlen(s);
	subsize = start > ssize ? 0 : ft_strlen(s + start);
	newsize = subsize > len ? len + 1 : subsize + 1;
	string = (char *)malloc(sizeof(char) * newsize);
	if (string)
	{
		ft_bzero(string, sizeof(char) * newsize);
		if (ssize > start)
			ft_strlcpy(string, s + start, newsize);
		return (string);
	}
	return (NULL);
}
