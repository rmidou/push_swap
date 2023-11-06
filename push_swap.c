/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:50 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/06 13:39:59 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(int *stack_a)
{
	int	*stack_b;

	stack_b = (int *)malloc(sizeof(int) * (ft_strlen(stack_a) + 1));
	stack_b[0] = '\0';
	while (ft_strlen(stack_a) > 3)
	{
		if (ft_strlen(stack_b) == 0 || ft_strlen(stack_b) == 1)
			pb(stack_a, ft_strlen(stack_a), stack_b, ft_strlen(stack_b));
		else
			set_at_placeb(stack_a, stack_b);
	}
	sort_b(stack_b);
	sort_a(stack_a);
	while (ft_strlen(stack_b) > 0)
		set_at_place(stack_a, stack_b);
	free(stack_b);
	sort_all(stack_a);
}

int	main(int ac, char **av)
{
	int	*stack_a;
	int	*stack_b;

	if (ac < 2)
		return (0);
	stack_b = NULL;
	stack_a = ft_filling(av);
	push_swap(stack_a);
	free(stack_a);
	free(stack_b);
	return (0);
}
