/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:55:05 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/14 19:29:28 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_last(int *stack_a, int len_a)
{
	if (stack_a[0] <= stack_a[1] && stack_a[1] <= stack_a[2])
	{
		return ;
	}
	if (stack_a[0] <= stack_a[1] && stack_a[1] >= stack_a[2] 
		&& stack_a[0] > stack_a[2])
	{
		sa(stack_a, len_a);
		ra(stack_a, len_a);
	}
	if (stack_a[0] <= stack_a[1] && stack_a[1] >= stack_a[2])
		rra(stack_a, len_a);
	if (stack_a[0] >= stack_a[1] && stack_a[1] <= stack_a[2] 
		&& stack_a[0] < stack_a[2])
		sa(stack_a, len_a);
	if (stack_a[0] >= stack_a[1] && stack_a[1] <= stack_a[2])
		ra(stack_a, len_a);
	if (stack_a[0] >= stack_a[1] && stack_a[1] >= stack_a[2])
	{
		sa(stack_a, len_a);
		rra(stack_a, len_a);
	}
}

void	sort_a(int *stack_a, int len_a)
{
	if (len_a <= 1)
		return ;
	if ((len_a == 2))
	{
		if (stack_a[1] >= stack_a[0])
			sa(stack_a, len_a);
		return ;
	}
	sort_last(stack_a, len_a);
}

void	sort_all(int *stack_a, int len_a)
{
	int	i;

	i = minimum(stack_a, len_a);
	if (minimum_adresse(stack_a, len_a + 1) > (len_a / 2))
	{
		while (stack_a[0] != i)
			rra(stack_a, len_a);
	}
	else
	{
		while (stack_a[0] != i)
			ra(stack_a, len_a);
	}
}

void	sort_b(int *stack_b, int len_b)
{
	int	i;

	i = maxii(stack_b, len_b);
	if (maxi(stack_b, len_b) > (len_b / 2))
	{
		while (stack_b[0] != i)
			rrb(stack_b, len_b);
	}
	else
	{
		while (stack_b[0] != i)
			rb(stack_b, len_b);
	}
}
