/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_at_placeb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:49:17 by nbiron            #+#    #+#             */
/*   Updated: 2023/11/07 14:12:09 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_at_placeb_mini(int *stack_b, int len_b)
{
	if (maxi(stack_b, len_b) >= (len_b / 2))
	{
		while (stack_b[0] != maxii(stack_b, len_b))
			rrb(stack_b, len_b);
	}
	else
	{
		while (stack_b[0] != maxii(stack_b, len_b))
			rb(stack_b, len_b);
	}
}

static void	set_at_place_other(int *stack_a, int *stack_b, int len_b)
{
	int	i;

	i = mini(stack_b, stack_a[0], len_b);
	if (mini_adresse(stack_b, stack_a[0], len_b) >= (len_b / 2))
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

void	set_at_placeb(int *stack_a, int *stack_b, int len_a, int len_b)
{
	int	*minimum_stack_a;
	int	nb;

	minimum_stack_a = ft_striteri(stack_a, stack_b, len_a, len_b);
	nb = stack_a[minimum_adresse(minimum_stack_a, len_a)];
	while (stack_a[0] != nb)
	{
		if (minimum_adresse(minimum_stack_a, len_a) > (len_a / 2))
			rra (stack_a, len_a);
		else
			ra (stack_a, len_a);
	}
	if (stack_a[0] > maxii(stack_b, len_b)
		|| stack_a[0] < minimum(stack_b, len_b))
		set_at_placeb_mini (stack_b, len_b);
	else
		set_at_place_other (stack_a, stack_b, len_b);
	free(minimum_stack_a);
	pb (stack_a, len_a, stack_b, len_b);
}
