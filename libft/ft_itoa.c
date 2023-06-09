/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <cleone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:01:17 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 16:19:12 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n != 0)
	{
		n /= 10;
		++len;
	}
	return (len);
}

static char	*str_alloc(char *str, int n, int *i)
{
	if (n >= 0)
	{
		str = ft_calloc(ft_nlen(n) + 1, sizeof(char));
		*i = ft_nlen(n) - 1;
	}
	else
	{
		str = ft_calloc(ft_nlen(n) + 2, sizeof(char));
		if (!str)
			return (NULL);
		*str = '-';
		*i = ft_nlen(n);
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		temp;
	char	*str;

	str = NULL;
	str = str_alloc(str, n, &i);
	if (!str)
		return (NULL);
	while (i > -1 && *(str + i) != '-')
	{
		temp = n;
		temp %= 10;
		if (temp < 0)
			temp *= -1;
		*(str + i) = temp + '0';
		n /= 10;
		--i;
	}
	return (str);
}
