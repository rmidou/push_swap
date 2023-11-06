/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:50:09 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/06 10:51:42 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	minimum_adresse(int *stack)
{
	int	i;
	int	mini;
	int	adresse;

	i = 0;
	mini = stack[0];
	adresse = 0;
	while (stack[i])
	{
		if (stack[i] < mini)
		{
			mini = stack [i];
			adresse = i;
		}
		i++;
	}
	return (adresse);
}

int	minimum(int *stack)
{
	int	i;
	int	mini;

	i = 0;
	mini = stack[0];
	while (stack[i])
	{
		if (stack[i] < mini)
			mini = stack [i];
		i++;
	}
	return (mini);
}

int	mini(int *stack, int nbr)
{
	int	i;
	int	mini;

	i = 0;
	mini = minimum(stack);
	while (stack[i])
	{
		if (stack[i] > mini && stack[i] < nbr)
			mini = stack [i];
		i++;
	}
	return (mini);
}

int	mini_adresse(int *stack, int nbr)
{
	int	i;
	int	mini;
	int	adresse;

	i = 0;
	mini = minimum(stack);
	adresse = 0;
	while (stack[i])
	{
		if (stack[i] > mini && stack[i] < nbr)
		{
			mini = stack [i];
			adresse = i;
		}
		i++;
	}
	return (adresse);
}
