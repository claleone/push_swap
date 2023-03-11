/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <cleone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:01:38 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 16:19:27 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*old;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		old = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = old;
	}
	lst = NULL;
}
