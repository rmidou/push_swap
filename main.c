/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:50 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/06 07:46:13 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	sort_all(int *stack_a)
// {
// 	int	i;

// 	i = minimum(stack_a);
// 	if ((size_t)minimum_adresse(stack_a) > (ft_strlen(stack_a) / 2))
// 	{
// 		while (stack_a[0] != i)
// 			rra(stack_a, ft_strlen(stack_a));
// 	}
// 	else
// 	{
// 		while (stack_a[0] != i)
// 			ra(stack_a, ft_strlen(stack_a));
// 	}
// }

static void	sort_b(int *stack_b)
{
	int	i;

	i = maxii(stack_b);
	if ((size_t)maxi(stack_b) > (ft_strlen(stack_b) / 2))
	{
		while (stack_b[0] != i)
			rra(stack_b, ft_strlen(stack_b));
	}
	else
	{
		while (stack_b[0] != i)
			ra(stack_b, ft_strlen(stack_b));
	}
}

int	*ft_strongest(int *stack_a)
{
	int	*strongest;

	strongest = malloc(sizeof (int) * 4);
	strongest[3] = '\0';
	strongest[0] = maxii(stack_a);
	strongest[1] = mini(stack_a, strongest[0]);
	strongest[2] = mini(stack_a, strongest[1]);
	return (strongest);
}

int	in(int *strongest, int nb)
{
	if (nb == strongest[0] || nb == strongest[1] || nb == strongest[2])
		return(1);
	return (0);
}

void	push_swap(int *stack_a)
{
	int	*stack_b;
	int	*strongest;

	stack_b = (int *)malloc(sizeof(int) * (ft_strlen(stack_a) + 1));
	stack_b[0] = '\0';
	strongest = ft_strongest(stack_a);
	while (ft_strlen(stack_a) > 3)
	{
		//if (in(strongest, stack_a[0]))
			//ra (stack_a, ft_strlen(stack_a));
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
	free(strongest);
	//sort_all(stack_a);
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

#include <stdio.h>

int	main(int ac, char **av)
{
	int	*stack_a;
	int	*stack_b;

	// int	i;
	// i = 0;

	if (ac < 2)
		return (0);
	//if (!is_correct_input(av))
		//exit_error(NULL, NULL);
	stack_b = NULL;
	stack_a = filling(av);
	push_swap(stack_a);
	// printf("Sorted Stack a: ");
   	// while (stack_a[i]) 
   	// {
    //     printf("%d ", stack_a[i]);
	// 	i++;
    // }
    // printf("\n");
	free(stack_a);
	free(stack_b);
	return (0);
}