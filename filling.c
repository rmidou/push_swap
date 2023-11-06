/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:53:34 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/06 13:41:00 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isdigit(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		if (c[i] < '0' || c[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	ft_atoi(const char *nptr)
{
	int		i;
	int		signe;
	int		nbr;

	i = 0;
	signe = 1;
	nbr = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr *= 10;
		nbr += (nptr[i] - 48);
		i++;
	}
	return (nbr * signe);
}

static int	*ft_filling2(char *str, int *stack_a)
{
	int	*temp;
	int	j;

	j = 0;
	temp = malloc(sizeof(int) * (ft_strlen(stack_a) + 2));
	if (stack_a)
	{
		while (stack_a[j])
		{
			temp[j] = stack_a[j];
			j++;
		}
	}
	temp[j] = ft_atoi(str);
	temp[j + 1] = '\0';
	free(stack_a);
	stack_a = temp;
	return (stack_a);
}

int	*ft_filling(char **av)
{
	int	i;
	int	*stack_a;

	stack_a = NULL;
	i = 1;
	while (av[i])
	{
		if (ft_isdigit(av[i]))
			stack_a = ft_filling2(av[i], stack_a);
		else
			write(1, "erreur\n", 7);
		i++;
	}
	return (stack_a);
}
