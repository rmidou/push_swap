/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:50 by rmidou            #+#    #+#             */
/*   Updated: 2023/10/28 13:41:39 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_at_placeb(int *stack_A, int *stack_B)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("a");
	if (ft_strlen(stack_B) == 1)
		pb(stack_A, ft_strlen(stack_A), stack_B, ft_strlen(stack_B));
	else
	{
		while (stack_B[i] < stack_A[0] && stack_B[i])
			i++;
		while (stack_B[j] > stack_A[0] && stack_B[j])
			j++;
		if (i == ft_strlen(stack_B - 1))
		{
			if (maxi(stack_B) > (ft_strlen(stack_B) / 2))
			{
				while(stack_B[0] != maxii(stack_B))
					rb(stack_B, ft_strlen(stack_B));
			}
			else
			{
				while(stack_B[0] != maxii(stack_B))
					rrb(stack_B, ft_strlen(stack_B));
			}
		}
		else if (j == ft_strlen(stack_B - 1))
		{
			if (maxi(stack_B) > (ft_strlen(stack_B) / 2))
			{
				while(stack_B[0] != maxii(stack_B))
					rb(stack_B, ft_strlen(stack_B));
			}
			else
			{
				while(stack_B[0] != maxii(stack_B))
					rrb(stack_B, ft_strlen(stack_B));
			}
		}
		else
		{
			i = 0;
			while (!(stack_B[0] < stack_A[0]) || !(stack_B[ft_strlen(stack_B) - 1] > stack_A[0]))
				rb(stack_B, ft_strlen(stack_B));
		}
		pb(stack_A, ft_strlen(stack_A), stack_B, ft_strlen(stack_B));
	}
}

void	set_at_place(int *stack_A, int *stack_B)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack_A[i] < stack_B[0] && stack_A[i])
		i++;
	while (stack_A[j] > stack_B[0] && stack_A[j])
		j++;
	if (i == ft_strlen(stack_A))
	{
		if (maxi(stack_A) > (ft_strlen(stack_A) / 2))
		{
			while(stack_A[0] != maxii(stack_A))
				ra(stack_A, ft_strlen(stack_A));
		}
		else
		{
			while(stack_A[0] != maxii(stack_A))
				rra(stack_A, ft_strlen(stack_A));
		}
	}
	else if (j == ft_strlen(stack_A))
	{
		if (maxi(stack_A) > (ft_strlen(stack_A) / 2))
		{
			while(stack_A[0] != maxii(stack_A))
				ra(stack_A, ft_strlen(stack_A));
		}
		else
		{
			while(stack_A[0] != maxii(stack_A))
				rra(stack_A, ft_strlen(stack_A));
		}
	}
	else
	{
		i = 0;
		while (!(stack_A[0] < stack_B[0]) || !(stack_A[ft_strlen(stack_B) - 1] > stack_B[0]))
			ra(stack_A, ft_strlen(stack_A));
	}
	pa(stack_A, ft_strlen(stack_A), stack_B, ft_strlen(stack_B));
}
/*
void	sort_all(int *stack_A)
{

}*/
void	push_swap(int *stack_A)
{
    int	i;
	int	*stack_B;

	i = 0;
	printf("a");
	stack_B = (int *)malloc(sizeof(int) * (ft_strlen(stack_A) + 1));
	stack_B[0] = '\0';
	printf("a");
	while (ft_strlen(stack_A) > 3)
	{
		if (ft_strlen(stack_B) == 0)
			pb(stack_A, ft_strlen(stack_A), stack_B, ft_strlen(stack_B));
		else
			set_at_placeb(stack_A, stack_B);
		printf("b");
	}
	printf("a");
	sort_A(stack_A);
	while (ft_strlen(stack_B) > 0)
	{
		printf("%lddebut", ft_strlen(stack_B));
		set_at_place(stack_A, stack_B);
	}
	free(stack_B);
	//sort_all();

}

int main() {
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
    printf("Unsorted Stack A: ");
    while (stack_a[i])
	{
        printf("%d ", stack_a[i]);
		i++;
    }
    // Sorting stack a using bubble sort
    push_swap(stack_a);

    // Printing the sorted stack
	i = 0;
    printf("Sorted Stack A: ");
   	while (stack_a[i]) 
   	{
        printf("%d ", stack_a[i]);
		i++;
    }
    printf("\n");

    return 0;
}