/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:53 by rmidou            #+#    #+#             */
/*   Updated: 2023/10/28 13:53:52 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const int *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	sort_last(int *stack_A)
{
	if (stack_A[0] <= stack_A[1] && stack_A[1] <= stack_A[2]) //123
	{
		return;
	}
	if (stack_A[0] <= stack_A[1] && stack_A[1] >= stack_A[2] && stack_A[0] > stack_A[2]) //132
	{
		sa(stack_A, ft_strlen(stack_A));
		ra(stack_A, ft_strlen(stack_A));
	}
	if (stack_A[0] <= stack_A[1] && stack_A[1] >= stack_A[2]) //231
		rra(stack_A, ft_strlen(stack_A));
	if (stack_A[0] >= stack_A[1] && stack_A[1] <= stack_A[2] && stack_A[0] < stack_A[2])// 213
		sa(stack_A, ft_strlen(stack_A));
	if (stack_A[0] >= stack_A[1] && stack_A[1] <= stack_A[2])// 312
		ra(stack_A, ft_strlen(stack_A));
	if (stack_A[0] >= stack_A[1] && stack_A[1] >= stack_A[2])// 321
	{
		sa(stack_A, ft_strlen(stack_A));
		rra(stack_A, ft_strlen(stack_A));
	}
}

void	sort_A(int *stack_A)
{
	int	temp;

	if (ft_strlen(stack_A) <= 1)
		return ;
	if ((ft_strlen(stack_A) == 2))
	{
		if(stack_A[1] >= stack_A[0])
			sa(stack_A, ft_strlen(stack_A));
		return;
	}
	sort_last(stack_A);
}

int	maxi(int *stack)
{
	int	i;
	int	maxi;
	int	adresse;

	i = 1;
	maxi = stack[0];
	adresse = 0;
	while (stack[i])
	{
		if (stack[i] > maxi)
		{
			maxi = stack [i];
			adresse = i;
		}
		i++;
	}
	return (adresse);
}

int	maxii(int *stack)
{
	int	i;
	int	maxi;

	i = 1;
	maxi = stack[0];
	while (stack[i])
	{
		if (stack[i] > maxi)
			maxi = stack [i];
		i++;
	}
	return (maxi);
}