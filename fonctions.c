/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:56 by rmidou            #+#    #+#             */
/*   Updated: 2023/10/28 13:49:18 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int *stack_a, int size_a, int *stack_b, int size_b)
{
    int i;

	i = 1;
	stack_a[size_a + 1] = '\0';
	while (stack_a[size_a - 1])
	{
		stack_a[size_a] = stack_a[size_a - 1];
		size_a--;
    }
	if (size_b > 0) 
	{
		stack_a[0] = stack_b[0];
		i = 1;
		while (stack_b[i])
		{
			stack_b[i - 1] = stack_b[i];
			i++;
		}
		stack_b[i - 1] = '\0';
	}
}

void	pb(int *stack_a, int size_a, int *stack_b, int size_b)
{
	int i;

	i = 1;
	printf("a");
	stack_b[size_b + 1] = '\0';
	while (stack_b[size_b - 1])
	{
		stack_b[size_b] = stack_b[size_b - 1];
		size_b--;
	}
	if (size_a > 0) 
	{
		stack_b[0] = stack_a[0];
		i = 1;
		while (stack_a[i])
		{
			stack_a[i - 1] = stack_a[i];
			i++;
		}
		stack_a[i - 1] = '\0';
	}
}

void	ra(int *stack_A, int len_A)
{
	int	temp;
	int	i;

	if (len_A > 0) 
	{
		temp = stack_A [0];
		i = 1;
		while (stack_A[i])
		{
			stack_A[i - 1] = stack_A[i];
			i++;
		}
		stack_A[i - 1] = temp;
	}
}

void	rb(int *stack_B, int len_B)
{
	int	temp;
	int	i;

	if (len_B > 0) 
	{
		temp = stack_B [0];
		i = 1;
		while (stack_B[i])
		{
			stack_B[i - 1] = stack_B[i];
			i++;
		}
		stack_B[i - 1] = temp;
	}
}
