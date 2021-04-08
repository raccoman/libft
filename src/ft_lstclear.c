/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:36:10 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/15 18:36:11 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_elem;
	t_list	*next_elem;

	next_elem = *lst;
	while (next_elem)
	{
		current_elem = next_elem;
		next_elem = current_elem->next;
		ft_lstdelone(current_elem, del);
	}
	*lst = NULL;
}
