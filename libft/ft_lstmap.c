/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <cleone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:01:59 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 16:19:49 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tail;

	if (!f || !del || !lst)
		return (NULL);
	head = NULL;
	while (lst)
	{
		tail = ft_lstnew(f(lst -> content));
		if (!tail)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, tail);
		lst = lst -> next;
	}
	return (head);
}
