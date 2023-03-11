/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scroll_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:25:38 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 15:25:51 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	*scroll_swap(int *stack, int slots, int steps, int dir)
{
	int	i;
	int	j;
	int	up_to;
	int	*temp;

	if (steps == 0)
		return (stack);
	i = 0;
	j = 0;
	temp = malloc(sizeof(int) * slots);
	if (dir == 0)
		i = steps;
	else if (dir == 1)
		i = slots - steps;
	up_to = i;
	temp[j++] = stack[i++];
	while (i != up_to)
	{
		if (i == slots)
			i = 0;
		temp[j++] = stack[i++];
	}
	free(stack);
	return (temp);
}

/* scrolls the given stack according to steps and dir 
** 
** 0 = scroll RIGHT to LEFT
** 1 = scroll LEFT to RIGHT
*/
