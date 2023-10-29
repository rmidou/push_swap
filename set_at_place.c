/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_at_place.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:42:39 by nbiron            #+#    #+#             */
/*   Updated: 2023/10/29 10:44:03 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_at_place_mini(int *stack_a)
{
	if ((size_t)maxi(stack_a) > (ft_strlen(stack_a) / 2))
	{
		while (stack_a[ft_strlen(stack_a) - 1] != maxii(stack_a))
			ra (stack_a, ft_strlen(stack_a));
	}
	else
	{
		while (stack_a[ft_strlen(stack_a) - 1] != maxii(stack_a))
			rra (stack_a, ft_strlen(stack_a));
	}
}

static void	set_at_place_maxi(int *stack_a)
{
	if ((size_t)maxi(stack_a) > (ft_strlen(stack_a) / 2))
	{
		while (stack_a[ft_strlen(stack_a) - 1] != maxii(stack_a))
			ra (stack_a, ft_strlen(stack_a));
	}
	else
	{
		while (stack_a[ft_strlen(stack_a) - 1] != maxii(stack_a))
			rra (stack_a, ft_strlen(stack_a));
	}
}

static void	set_at_place_other(int *stack_a, int *stack_b)
{
	int	i;

	i = mini(stack_a, stack_b[0]);
	if ((size_t)i > (ft_strlen(stack_a) / 2))
	{
		while (stack_a[ft_strlen(stack_a) - 1] != i)
			rra (stack_a, ft_strlen(stack_a));
	}
	else
	{
		while (stack_a[ft_strlen(stack_a) - 1] != i)
			ra (stack_a, ft_strlen(stack_a));
	}
}

void	set_at_place(int *stack_a, int *stack_b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack_a[i] < stack_b[0] && stack_a[i])
		i++;
	while (stack_a[j] > stack_b[0] && stack_a[j])
		j++;
	if ((size_t)i == ft_strlen(stack_a))
		set_at_place_maxi(stack_a);
	else if ((size_t)j == ft_strlen(stack_a))
		set_at_place_mini(stack_a);
	else
		set_at_place_other(stack_a, stack_b);
	pa(stack_a, ft_strlen(stack_a), stack_b, ft_strlen(stack_b));
}
