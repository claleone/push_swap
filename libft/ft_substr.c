/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <cleone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:04:33 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 16:21:43 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;

	if (!s)
		return (NULL);
	i = 0;
	while (*(s + i))
		++i;
	if (start > (size_t)i)
		return (ft_calloc(1, 1));
	i = 0;
	while (*(s + start + i) && (size_t)i < len)
		++i;
	substr = (char *)malloc(sizeof(char) * i + 1);
	if (!substr)
		return (NULL);
	*(substr + i) = '\0';
	while (i > 0)
	{
		--i;
		*(substr + i) = *(s + start + i);
	}
	return (substr);
}
