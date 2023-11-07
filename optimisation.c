/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimisation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:38:39 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/07 14:12:41 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_mini_moove1(int nb_adresse, int len_stack_in)
{
	int	total;

	total = 0;
	if (nb_adresse < (len_stack_in / 2))
		total += nb_adresse;
	else
		total += (len_stack_in - nb_adresse);
	return (total);
}

static int	ft_mini_moove_mini(int *stack_to, int len_stack_to)
{
	int	total;

	total = 0;
	if (maxi(stack_to, len_stack_to) > (len_stack_to / 2))
		total += (len_stack_to - maxi(stack_to, len_stack_to));
	else
		total += maxi(stack_to, len_stack_to);
	return (total);
}

static	int	ft_mini_moove(int *stack_to, int len_stack_to, int nb)
{
	int	total;

	total = 0;
	if (mini_adresse(stack_to, nb, len_stack_to) > (len_stack_to / 2))
		total += (len_stack_to - mini_adresse(stack_to, nb, len_stack_to));
	else
		total += mini_adresse(stack_to, nb, len_stack_to);
	return (total);
}

int	*ft_striteri(int *s, int *stack_to, int len_stack_in, int len_stack_to)
{
	int	i;
	int	*tab;
	int	total;

	total = 0;
	i = 0;
	tab = malloc(sizeof(int) * (len_stack_in + 1));
	while (i < len_stack_in)
	{
		if (s[i] > maxii(stack_to, len_stack_to)
			|| s[i] < minimum(stack_to, len_stack_to))
			total += ft_mini_moove_mini(stack_to, len_stack_to);
		else
			total += ft_mini_moove(stack_to, len_stack_to, s[i]);
		total += ft_mini_moove1(i, len_stack_in);
		tab[i] = total;
		i++;
		total = 0;
	}
	return (tab);
}
