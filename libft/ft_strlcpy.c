/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <cleone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:03:48 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 16:21:14 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dstsize)
	{
		while (*(src + i))
			++i;
		return (i);
	}
	while (i < dstsize - 1 && *(src + i))
	{
		*(dest + i) = *(src + i);
		++i;
	}
	*(dest + i) = '\0';
	while (*(src + i))
		++i;
	return (i);
}
