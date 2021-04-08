/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:38:30 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/15 18:38:31 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	size_t	s1len;
	size_t	s2len;
	char	*string;

	if (!s1)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	string = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (string)
	{
		k = 0;
		i = 0;
		while (s1[i])
			string[k++] = s1[i++];
		i = 0;
		while (s2[i])
			string[k++] = s2[i++];
		string[k] = '\0';
		return (string);
	}
	return (NULL);
}
