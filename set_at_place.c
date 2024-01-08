/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_at_place.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:42:39 by nbiron            #+#    #+#             */
/*   Updated: 2024/01/08 15:09:27 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_at_place_mini(int *stack_a, int len_a)
{
	if (maxi(stack_a, len_a) >= (len_a / 2))
	{
		while (stack_a[len_a - 1] != maxii(stack_a, len_a))
			rra(stack_a, len_a);
	}
	else
	{
		while (stack_a[len_a - 1] != maxii(stack_a, len_a))
			ra(stack_a, len_a);
	}
}

static void	set_at_place_other(int *stack_a, int *stack_b, int len_a)
{
	int	i;

	i = mini(stack_a, stack_b[0], len_a);
	if (mini_adresse(stack_a, stack_b[0], len_a) >= (len_a / 2))
	{
		while (stack_a[len_a - 1] != i)
			rra(stack_a, len_a);
	}
	else
	{
		while (stack_a[len_a - 1] != i)
			ra(stack_a, len_a);
	}
}

void	set_at_place(int *stack_a, int *stack_b, int len_a, int len_b)
{
	if (stack_b[0] > maxii(stack_a, len_a)
		|| stack_b[0] < minimum(stack_a, len_a))
		set_at_place_mini (stack_a, len_a);
	else
		set_at_place_other (stack_a, stack_b, len_a);
	pa(stack_a, len_a, stack_b, len_b);
}
