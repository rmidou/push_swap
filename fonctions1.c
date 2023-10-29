/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:58 by rmidou            #+#    #+#             */
/*   Updated: 2023/10/28 13:50:33 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(int *stack_B, int len_B)
{
	int	temp;

	if (len_B > 0) 
	{
		temp = stack_B[len_B - 1];
		while (len_B > 1)
		{
			stack_B[len_B - 1] = stack_B[len_B - 2];
			len_B--;
		}
		stack_B[0] = temp;
	}
}

void	rra(int *stack_A, int len_A)
{
	int	temp;

	if (len_A > 0) 
	{
		temp = stack_A[len_A - 1];
		while (len_A > 1)
		{
			stack_A[len_A - 1] = stack_A[len_A - 2];
			len_A--;
		}
		stack_A[0] = temp;
	}
}

void	sa(int *stack_A, int len_A)
{
	int	temp;

	if (len_A > 1)
	{
		temp = stack_A[0];
		stack_A[0] = stack_A[1];
		stack_A[1] = temp;
	}
}