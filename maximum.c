/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maximum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:50:56 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/06 10:51:32 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	maxi(int *stack)
{
	int	i;
	int	maxi;
	int	adresse;

	i = 0;
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

	i = 0;
	maxi = stack[0];
	while (stack[i])
	{
		if (stack[i] > maxi)
			maxi = stack [i];
		i++;
	}
	return (maxi);
}
