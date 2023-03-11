/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:24:17 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 15:24:27 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	rev_swap(int *array, int slots)
{
	int	beg;
	int	end;
	int	temp;

	beg = 0;
	end = slots - 1;
	while (beg < end)
	{
		temp = array[beg];
		array[beg] = array[end];
		array[end] = temp;
		++beg;
		--end;
	}
}
