/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <cleone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:00:14 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 16:18:00 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	num;
	int				i;
	int				sign;

	num = 0;
	sign = 1;
	i = 0;
	while (*(str + i) == ' ' || *(str + i) == '\t' || *(str + i) == '\f'
		|| *(str + i) == '\r' || *(str + i) == '\n' || *(str + i) == '\v')
		++i;
	if (*(str + i) == '+' || *(str + i) == '-')
		if (*(str + i++) == '-')
			sign = -1;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		num = num * 10 + (*(str + i) - '0');
		++i;
	}
	return ((int)(sign * num));
}
