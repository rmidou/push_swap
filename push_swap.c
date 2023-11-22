/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:50 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/22 15:43:02 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(int *stack_a, int *len_a)
{
	int	*stack_b;
	int	len_b;

	len_b = 0;
	stack_b = (int *)malloc(sizeof(int) * (*len_a + 1));
	stack_b[0] = '\0';
	while (*len_a > 3)
	{
		if (len_b == 0 || len_b == 1)
			pb(stack_a, *len_a, stack_b, len_b);
		else
			set_at_placeb(stack_a, stack_b, *len_a, len_b);
		(*len_a)--;
		len_b++;
	}
	sort_b(stack_b, len_b);
	sort_a(stack_a, *len_a);
	while (len_b > 0)
	{
		set_at_place(stack_a, stack_b, *len_a, len_b);
		len_b--;
		(*len_a)++;
	}
	free(stack_b);
	sort_all(stack_a, *len_a);
}

int	main(int ac, char **av)
{
	int	*stack_a;
	int	*stack_b;
	int	len_a;

	len_a = 0;
	if (ac < 2)
		ft_error();
	stack_b = NULL;
	stack_a = ft_filling(av, &len_a, ac);
	if (!stack_a || ft_dup(stack_a, len_a))
	{
		free(stack_a);
		ft_error();
	}
	push_swap(stack_a, &len_a);
	free(stack_a);
	free(stack_b);
	return (0);
}
