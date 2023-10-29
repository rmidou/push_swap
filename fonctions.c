/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:56 by rmidou            #+#    #+#             */
/*   Updated: 2023/10/29 11:29:14 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int *stack_a, int size_a, int *stack_b, int size_b)
{
	int	i;

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
	write(1, "pa\n", 3);
}

void	pb(int *stack_a, int size_a, int *stack_b, int size_b)
{
	int	i;

	i = 1;
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
		while (stack_a[i])
		{
			stack_a[i - 1] = stack_a[i];
			i++;
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
		while (stack_b[i])
		{
			stack_b[i - 1] = stack_b[i];
			i++;
		}
		stack_b[i - 1] = temp;
	}
	write(1, "rb\n", 3);
}

int	*filling(char **av)
{
	int	i;
	int *temp;
	int	j;
	int *stack_a;

	stack_a = (int *)malloc(sizeof(int) * 1);
	stack_a[0] = '\0';
	i = 0;
	j = 0;
	while (av[1][i])
	{
		temp = (int *)malloc(sizeof(int) * i + 1);
		if (i != 0)
		{
			while (j < i)
			{
				temp[j] = stack_a[j];
				j++;
			}
			j = 0;
		}
		temp[i + 1] = '\0';
		temp[i] = (int)(av[1][i] - 48);
		stack_a = temp;
		free(temp);
	}
	return (stack_a);
}