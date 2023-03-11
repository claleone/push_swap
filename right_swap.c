/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   right_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:24:47 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 15:24:56 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	right_swap(int *stack_a, int slots)
{
	int	i;
	int	j;
	int	stop;

	j = lil_swap(stack_a, slots);
	i = j + 1;
	if (i == slots)
		i = 0;
	stop = j;
	while (i != stop)
	{
		if (stack_a[i] < stack_a[j])
			return (1);
		j = i;
		++i;
		if (i == slots)
			i = 0;
	}
	return (0);
}
