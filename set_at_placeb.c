/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_at_placeb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:49:17 by nbiron            #+#    #+#             */
/*   Updated: 2023/11/05 15:10:26 by rmidou           ###   ########.fr       */
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

static void	set_at_placeb_maxi(int *stack_b)
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
	if ((size_t)i < (ft_strlen(stack_b) / 2))
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
	int	i;
	int	j;

	i = 0;
	j = 0;
	//printf("%d\n",stack_b[0]);
	if (ft_strlen(stack_b) == 1)
		pb (stack_a, ft_strlen(stack_a), stack_b, ft_strlen(stack_b));
	else
	{
		while (stack_b[i] < stack_a[0] && stack_b[i])
			i++;
		while (stack_b[j] > stack_a[0] && stack_b[j])
			j++;
		if ((size_t)i == (ft_strlen(stack_b) - 1))
			set_at_placeb_maxi(stack_b);
		else if ((size_t)j == (ft_strlen(stack_b) - 1))
			set_at_placeb_mini (stack_b);
		else
			set_at_place_other (stack_a, stack_b);
		pb (stack_a, ft_strlen(stack_a), stack_b, ft_strlen(stack_b));
	}
}
