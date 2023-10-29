/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:53 by rmidou            #+#    #+#             */
/*   Updated: 2023/10/29 10:41:46 by nbiron           ###   ########.fr       */
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

void	sort_last(int *stack_a)
{
	if (stack_a[0] <= stack_a[1] && stack_a[1] <= stack_a[2])
	{
		return ;
	}
	if (stack_a[0] <= stack_a[1] && stack_a[1] >= stack_a[2] 
		&& stack_a[0] > stack_a[2])
	{
		sa(stack_a, ft_strlen(stack_a));
		ra(stack_a, ft_strlen(stack_a));
	}
	if (stack_a[0] <= stack_a[1] && stack_a[1] >= stack_a[2])
		rra(stack_a, ft_strlen(stack_a));
	if (stack_a[0] >= stack_a[1] && stack_a[1] <= stack_a[2] 
		&& stack_a[0] < stack_a[2])
		sa(stack_a, ft_strlen(stack_a));
	if (stack_a[0] >= stack_a[1] && stack_a[1] <= stack_a[2])
		ra(stack_a, ft_strlen(stack_a));
	if (stack_a[0] >= stack_a[1] && stack_a[1] >= stack_a[2])
	{
		sa(stack_a, ft_strlen(stack_a));
		rra(stack_a, ft_strlen(stack_a));
	}
}

void	sort_a(int *stack_a)
{
	if (ft_strlen(stack_a) <= 1)
		return ;
	if ((ft_strlen(stack_a) == 2))
	{
		if (stack_a[1] >= stack_a[0])
			sa(stack_a, ft_strlen(stack_a));
		return ;
	}
	sort_last(stack_a);
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
