/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:38:18 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/15 18:38:19 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <printf.h>

static size_t	ft_split_size(const char *src, char delimiter)
{
	size_t	i;
	size_t	count;
	int		flag;

	flag = 0;
	count = 0;
	i = 0;
	while (src[i])
	{
		if (src[i] == delimiter)
			flag = 0;
		else
		{
			if (flag == 0)
			{
				flag = 1;
				count++;
			}
		}
		i++;
	}
	return (count);
}

static char		*ft_strndup(const char *src, int lenght)
{
	int		i;
	char	*string;

	string = (char *)malloc(sizeof(char) * (lenght + 1));
	if (string)
	{
		i = 0;
		while (i < lenght)
		{
			string[i] = src[i];
			i++;
		}
		string[i] = '\0';
		return (string);
	}
	return (NULL);
}

static int		ft_next_str(const char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] == c)
		i++;
	return (i);
}

static int		ft_next_delimiter(const char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] && src[i] != c)
		i++;
	return (i);
}

char			**ft_split(char const *s, char c)
{
	char	**split;
	int		size;
	int		i;
	int		k;
	int		next;

	if (!s)
		return (NULL);
	size = (int)ft_split_size(s, c);
	split = (char **)malloc(sizeof(char *) * (size + 1));
	if (split)
	{
		k = ft_next_str(s, c);
		i = 0;
		while (i < size)
		{
			next = ft_next_delimiter(s + k, c);
			split[i++] = ft_strndup(s + k, next);
			k += next;
			k += ft_next_str(s + k, c);
		}
		split[size] = NULL;
		return (split);
	}
	return (NULL);
}
