/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:36:01 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/15 18:36:02 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*current;

	if (lst && *lst)
	{
		current = *lst;
		while (current->next)
			current = current->next;
		current->next = new;
	}
	else if (lst)
		*lst = new;
}
