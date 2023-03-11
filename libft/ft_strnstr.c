/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <cleone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:04:17 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 16:21:31 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0 || needle == 0)
		return ((char *)haystack);
	i = 0;
	while (*(haystack + i) && i < len)
	{
		j = 0;
		while (*(haystack + i + j) == *(needle + j) && i + j < len)
		{
			if (*(needle + j + 1) == 0)
				return ((char *)haystack + i);
			++j;
		}
		++i;
	}
	return (NULL);
}
