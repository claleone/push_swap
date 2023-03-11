/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <cleone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:03:41 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 16:21:11 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	l_src;
	size_t	l_dst;

	l_src = ft_strlen(src);
	l_dst = ft_strlen(dst);
	i = 0;
	j = l_dst;
	if (l_dst < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && l_dst + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (l_dst >= dstsize)
		l_dst = dstsize;
	return (l_dst + l_src);
}
