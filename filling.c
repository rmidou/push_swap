/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:53:34 by rmidou            #+#    #+#             */
/*   Updated: 2023/12/17 17:40:44 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isdigit(char *c)
{
	int	i;

	i = 0;
	if (c[i] == '-')
		i++;
	if (ft_strlenn(c) > 13)
		return (0);
	while (c[i])
	{
		if (c[i] < '0' || c[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	ft_atoi(const char *nptr, int *stack_a)
{
	int				i;
	int				signe;
	long long int	nbr;

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
	if ((signe * nbr) > 2147483647LL || (signe * nbr) < -2147483648LL)
		atoi_error(stack_a);
	return (nbr * signe);
}

static int	*ft_filling2(char *str, int *stack_a, int len_a)
{
	int	*temp;
	int	j;

	j = 0;
	temp = malloc(sizeof(int) * (len_a + 2));
	if (len_a > 0)
	{
		while (len_a > 0)
		{
			temp[j] = stack_a[j];
			j++;
			len_a--;
		}
	}
	temp[j] = ft_atoi(str, stack_a);
	temp[j + 1] = '\0';
	free(stack_a);
	stack_a = temp;
	return (stack_a);
}

static void	free_split(char **map, int ac, int boo)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (map[i])
		{
			free(map[i]);
			i++;
		}
	}
	if ((boo == 1 && ac == 2) || (boo == 0))
		free(map);
}

int	*ft_filling(char **av, int *len_a, int ac)
{
	int	i;
	int	*stack_a;

	stack_a = NULL;
	i = 1;
	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		i = 0;
	}
	while (av[i])
	{
		if (ft_isdigit(av[i]))
			stack_a = ft_filling2(av[i], stack_a, *len_a);
		else
		{
			free_split(av, ac, 1);
			free(stack_a);
			ft_error();
		}
		(*len_a)++;
		i++;
	}
	free_split(av, ac, 1);
	return (stack_a);
}
