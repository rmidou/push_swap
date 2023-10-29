/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_at_placeb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:49:17 by nbiron            #+#    #+#             */
/*   Updated: 2023/10/29 10:08:31 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_at_placeb_mini(int *stack_B)
{
	if ((size_t)maxi(stack_B) > (ft_strlen(stack_B) / 2))
	{
		while(stack_B[ft_strlen(stack_B) - 1] != maxii(stack_B))
			rb(stack_B, ft_strlen(stack_B));
	}
	else
	{
		while(stack_B[ft_strlen(stack_B) - 1] != maxii(stack_B))
			rrb(stack_B, ft_strlen(stack_B));
	}
}

static void	set_at_placeb_maxi(int *stack_B)
{
	if ((size_t)maxi(stack_B) > (ft_strlen(stack_B) / 2))
	{
		while(stack_B[ft_strlen(stack_B) - 1] != maxii(stack_B))
			rb(stack_B, ft_strlen(stack_B));
	}
	else
	{
		while(stack_B[ft_strlen(stack_B) - 1] != maxii(stack_B))
			rrb(stack_B, ft_strlen(stack_B));
	}
}

void	set_at_placeb(int *stack_A, int *stack_B)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(stack_B) == 1)
		pb(stack_A, ft_strlen(stack_A), stack_B, ft_strlen(stack_B));
	else
	{
		while (stack_B[i] < stack_A[0] && stack_B[i])
			i++;
		while (stack_B[j] > stack_A[0] && stack_B[j])
			j++;
		if ((size_t)i == ft_strlen(stack_B - 1))
			set_at_placeb_maxi(stack_B);
		else if ((size_t)j == ft_strlen(stack_B - 1))
			set_at_placeb_mini(stack_B);
		else
		{
			i = mini(stack_A, stack_B[0]);
			while (stack_A[ft_strlen(stack_A) - 1] != i)
				ra(stack_A, ft_strlen(stack_A));
		}
		pb(stack_A, ft_strlen(stack_A), stack_B, ft_strlen(stack_B));
	}
}