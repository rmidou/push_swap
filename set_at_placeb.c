/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_at_placeb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:49:17 by nbiron            #+#    #+#             */
/*   Updated: 2023/11/06 07:34:12 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_at_placeb_mini(int *stack_b)
{
	if ((size_t)maxi(stack_b) < (ft_strlen(stack_b) / 2))
	{
		while (stack_b[0] != maxii(stack_b))
			rb(stack_b, ft_strlen(stack_b));
	}
	else
	{
		while (stack_b[0] != maxii(stack_b))
			rrb(stack_b, ft_strlen(stack_b));
	}
}

static void	set_at_place_other(int *stack_a, int *stack_b)
{
	int	i;

	i = mini(stack_b, stack_a[0]);
	if ((size_t)mini_adresse(stack_b, stack_a[0]) > (ft_strlen(stack_b) / 2) - 1)
	{
		while (stack_b[0] != i)
			rrb(stack_b, ft_strlen(stack_b));
	}
	else
	{
		while (stack_b[0] != i)
			rb(stack_b, ft_strlen(stack_b));
	}
}

void	set_at_placeb(int *stack_a, int *stack_b)
{
	int	*minimum_stack_a;
	int	nb;

	minimum_stack_a = ft_striteri(stack_a, stack_b, ft_strlen(stack_a));
	nb = stack_a[minimum_adresse(minimum_stack_a)];
	while (stack_a[0] != nb)
	{
		if ((size_t)minimum_adresse(minimum_stack_a) < (ft_strlen(stack_a) / 2))
			ra (stack_a, ft_strlen(stack_a));
		else
			rra (stack_a, ft_strlen(stack_a));	
	}
	if (stack_a[0] > maxii(stack_b) || stack_a[0] < minimum(stack_b))
		set_at_placeb_mini (stack_b);
	else
		set_at_place_other (stack_a, stack_b);
	pb (stack_a, ft_strlen(stack_a), stack_b, ft_strlen(stack_b));
}
