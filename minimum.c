/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:50:09 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/07 14:36:48 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	minimum_adresse(int *stack, int len_stack)
{
	int	i;
	int	mini;
	int	adresse;

	i = 0;
	mini = stack[0];
	adresse = 0;
	while (len_stack > 0)
	{
		if (stack[i] < mini)
		{
			mini = stack [i];
			adresse = i;
		}
		i++;
		len_stack--;
	}
	return (adresse);
}

int	minimum(int *stack, int len_stack)
{
	int	i;
	int	mini;

	i = 0;
	mini = stack[0];
	while (len_stack > 0)
	{
		if (stack[i] < mini)
			mini = stack [i];
		i++;
		len_stack--;
	}
	return (mini);
}

int	mini(int *stack, int nbr, int len_stack)
{
	int	i;
	int	mini;

	i = 0;
	mini = minimum(stack, len_stack);
	while (len_stack > 0)
	{
		if (stack[i] > mini && stack[i] < nbr)
			mini = stack [i];
		i++;
		len_stack--;
	}
	return (mini);
}

int	mini_adresse(int *stack, int nbr, int len_stack)
{
	int	i;
	int	minim;
	int	adresse;

	i = 0;
	minim = mini(stack, nbr, len_stack);
	adresse = 0;
	while (len_stack > 0)
	{
		if (stack[i] == minim)
		{
			minim = stack [i];
			adresse = i;
		}
		i++;
		len_stack--;
	}
	return (adresse);
}
