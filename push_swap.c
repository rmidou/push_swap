/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:50 by rmidou            #+#    #+#             */
/*   Updated: 2023/12/04 16:55:25 by nbiron           ###   ########.fr       */
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

static int	ft_trie(int	*stack_a, int len_a)
{
	int	i;
	int	y;

	i = 1;
	y = stack_a[0];
	while (i < len_a)
	{
		if (stack_a[i] > y)
			y = stack_a[i];
		else
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	*stack_a;
	int	*stack_b;
	int	len_a;

	if (ac < 3)
		return (0);
	stack_b = NULL;
	stack_a = ft_filling(av, &len_a, ac);
	if (ft_trie(stack_a, len_a))
	{
		free(stack_a);
		return (0);
	}
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
