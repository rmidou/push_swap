/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimisation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:38:39 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/06 09:10:51 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_striteri(int *s, int *stack_to, int len_stack_in)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * (len_stack_in + 1));
	while (s[i] != '\0')
	{
		tab[i] = ft_mini_moove(s[i], i, stack_to, len_stack_in);
		i++;
	}
	return (tab);
}

int	ft_mini_moove(int nb, int nb_adresse, int *stack_to, int len_stack_in)
{
	int	total;

	total = 0;
	if (nb_adresse < (len_stack_in / 2))
		total += nb_adresse;
	else
		total += (len_stack_in - nb_adresse);
	if (nb > maxii(stack_to) || nb < minimum(stack_to))
	{
		if ((size_t)maxi(stack_to) < (ft_strlen(stack_to) / 2))
			total += maxi(stack_to);
		else
			total += (ft_strlen(stack_to) - maxi(stack_to));
	}
	else
	{
		if ((size_t)mini_adresse(stack_to, nb) < (ft_strlen(stack_to) / 2))
			total += mini_adresse(stack_to, nb);
		else
			total += (ft_strlen(stack_to) - mini_adresse(stack_to, nb));
	}
	return(total);
}
