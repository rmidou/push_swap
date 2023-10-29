/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:50 by rmidou            #+#    #+#             */
/*   Updated: 2023/10/29 11:24:33 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_all(int *stack_a)
{
	int	i;

	i = minimum(stack_a);
	if ((size_t)i > (ft_strlen(stack_a) / 2))
	{
		while (stack_a[0] != i)
			rra(stack_a, ft_strlen(stack_a));
	}
	else
	{
		while (stack_a[0] != i)
			ra(stack_a, ft_strlen(stack_a));
	}
}

void	push_swap(int *stack_a)
{
	int	*stack_b;

	stack_b = (int *)malloc(sizeof(int) * (ft_strlen(stack_a) + 1));
	stack_b[0] = '\0';
	while (ft_strlen(stack_a) > 3)
	{
		if (ft_strlen(stack_b) == 0)
			pb(stack_a, ft_strlen(stack_a), stack_b, ft_strlen(stack_b));
		else
			set_at_placeb(stack_a, stack_b);
	}
	sort_a(stack_a);
	while (ft_strlen(stack_b) > 0)
	{
		set_at_place(stack_a, stack_b);
	}
	free(stack_b);
	sort_all(stack_a);
}
/*
int main() 
{
    int *stack_a;
	int i;

	i = 0;
	stack_a = malloc(sizeof(int) * 8);
	stack_a[0] = 1;
	stack_a[1] = 4;
	stack_a[2] = 7;
	stack_a[3] = 5;
	stack_a[4] = 2;
	stack_a[5] = 6;
	stack_a[6] = 3;
	stack_a[7] = '\0';

    // Printing the unsorted stack
    printf("Unsorted Stack a: ");
    while (stack_a[i])
	{
        printf("%d ", stack_a[i]);
		i++;
    }
    push_swap(stack_a);
	printf("\n");

    // Printing the sorted stack
	i = 0;
    printf("Sorted Stack a: ");
   	while (stack_a[i]) 
   	{
        printf("%d ", stack_a[i]);
		i++;
    }
    printf("\n");

    return 0;
}*/

int	main(int ac, char **av)
{
	int	*stack_a;
	int	*stack_b;

	if (ac < 2)
		return (0);
	//if (!is_correct_input(av))
		//exit_error(NULL, NULL);
	stack_b = NULL;
	stack_a = filling(av);
	push_swap(stack_a);
	free(stack_a);
	free(stack_b);
	return (0);
}