/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_ra_rra_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:25:11 by cleone            #+#    #+#             */
/*   Updated: 2023/03/09 15:25:25 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	sa_swap(int *stack_a)
{
	int	temp;

	temp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = temp;
}

/* performs the well-known stunt named 'sa' */

void	ra_swap(int *stack_a)
{
	int	temp;

	temp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = stack_a[2];
	stack_a[2] = temp;
}

/* demonstrates the signature move in the fine art of 'ra'*/

void	rra_swap(int *stack_a)
{
	int	temp;

	temp = stack_a[2];
	stack_a[2] = stack_a[1];
	stack_a[1] = stack_a[0];
	stack_a[0] = temp;
}

/* provides its astonished spectators with a display of
** the ancient and mysterious ritual called 'rra' */
