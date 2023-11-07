/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:56 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/06 17:06:18 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int *stack_a, int size_a, int *stack_b, int size_b)
{
	int	i;

	i = 1;
	stack_a[size_a + 1] = '\0';
	while (size_a > 0)
	{
		stack_a[size_a] = stack_a[size_a - 1];
		size_a--;
	}
	if (size_b > 0) 
	{
		stack_a[0] = stack_b[0];
		i = 1;
		while (size_b > 1)
		{
			stack_b[i - 1] = stack_b[i];
			i++;
			size_b--;
		}
		stack_b[i - 1] = '\0';
	}
	write(1, "pa\n", 3);
}

void	pb(int *stack_a, int size_a, int *stack_b, int size_b)
{
	int	i;

	i = 1;
	stack_b[size_b + 1] = '\0';
	while (size_b > 0)
	{
		stack_b[size_b] = stack_b[size_b - 1];
		size_b--;
	}
	if (size_a > 0) 
	{
		stack_b[0] = stack_a[0];
		i = 1;
		while (size_a > 1)
		{
			stack_a[i - 1] = stack_a[i];
			i++;
			size_a--;
		}
		stack_a[i - 1] = '\0';
	}
	write(1, "pb\n", 3);
}

void	ra(int *stack_a, int len_a)
{
	int	temp;
	int	i;

	if (len_a > 0) 
	{
		temp = stack_a [0];
		i = 1;
		while (len_a > 1)
		{
			stack_a[i - 1] = stack_a[i];
			i++;
			len_a--;
		}
		stack_a[i - 1] = temp;
	}
	write(1, "ra\n", 3);
}

void	rb(int *stack_b, int len_b)
{
	int	temp;
	int	i;

	if (len_b > 0) 
	{
		temp = stack_b [0];
		i = 1;
		while (len_b > 1)
		{
			stack_b[i - 1] = stack_b[i];
			i++;
			len_b--;
		}
		stack_b[i - 1] = temp;
	}
	write(1, "rb\n", 3);
}
