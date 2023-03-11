/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <cleone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:03:36 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 16:21:04 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*join;

	if (!s1)
		return (NULL);
	i = 0;
	while (*(s1 + i))
		++i;
	j = 0;
	while (*(s2 + j))
		++j;
	join = (char *)malloc(sizeof(char) * i + j + 1);
	if (!join)
		return (NULL);
	*(join + i + j) = '\0';
	while (--j >= 0)
		*(join + i + j) = *(s2 + j);
	while (--i >= 0)
		*(join + i) = *(s1 + i);
	return (join);
}	
