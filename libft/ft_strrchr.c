/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <cleone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:04:22 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 16:21:34 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*str;

	str = s;
	i = 0;
	while (*(str + i))
		++i;
	if (c == 0)
		return ((char *)str + i);
	while (i >= 0)
	{
		if (*(str + i) == (char)c)
			return ((char *)str + i);
		--i;
	}
	return (NULL);
}
