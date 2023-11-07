/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:58 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/07 07:22:13 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(int *stack_b, int len_b)
{
	int	temp;

	if (len_b > 0) 
	{
		temp = stack_b[len_b - 1];
		while (len_b > 1)
		{
			stack_b[len_b - 1] = stack_b[len_b - 2];
			len_b--;
		}
		stack_b[0] = temp;
	}
	write(1, "rrb\n", 4);
}

void	rra(int *stack_a, int len_a)
{
	int	temp;

	if (len_a > 1) 
	{
		temp = stack_a[len_a - 1];
		while (len_a > 1)
		{
			stack_a[len_a - 1] = stack_a[len_a - 2];
			len_a--;
		}
		stack_a[0] = temp;
	}
	write(1, "rra\n", 4);
}

void	sa(int *stack_a, int len_a)
{
	int	temp;

	if (len_a > 1)
	{
		temp = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp;
	}
	write(1, "sa\n", 3);
}
