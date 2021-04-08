/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:38:58 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/15 18:38:59 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strstrim;
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (NULL);
	k = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[k]))
	{
		k--;
		j++;
	}
	strstrim = ft_substr(s1, i, ft_strlen(&s1[i]) - j + 1);
	if (strstrim == NULL)
		return (NULL);
	return (strstrim);
}
