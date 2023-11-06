/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:56 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/06 09:43:29 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int *stack_a, int size_a, int *stack_b, int size_b)
{
	int	i;

	i = 1;
	stack_a[size_a + 1] = '\0';
	while (size_a > 0)
	{
		stack_a[size_a] = stack_a[size_a - 1];
		size_a--;
	}
	if (size_b > 0) 
	{
		stack_a[0] = stack_b[0];
		i = 1;
		while (stack_b[i])
		{
			stack_b[i - 1] = stack_b[i];
			i++;
		}
		stack_b[i - 1] = '\0';
	}
	write(1, "pa\n", 3);
}

void	pb(int *stack_a, int size_a, int *stack_b, int size_b)
{
	int	i;

	i = 1;
	stack_b[size_b + 1] = '\0';
	while (size_b > 0)
	{
		stack_b[size_b] = stack_b[size_b - 1];
		size_b--;
	}
	if (size_a > 0) 
	{
		stack_b[0] = stack_a[0];
		i = 1;
		while (stack_a[i])
		{
			stack_a[i - 1] = stack_a[i];
			i++;
		}
		stack_a[i - 1] = '\0';
	}
	write(1, "pb\n", 3);
}

void	ra(int *stack_a, int len_a)
{
	int	temp;
	int	i;

	if (len_a > 0) 
	{
		temp = stack_a [0];
		i = 1;
		while (stack_a[i])
		{
			stack_a[i - 1] = stack_a[i];
			i++;
		}
		stack_a[i - 1] = temp;
	}
	write(1, "ra\n", 3);
}

void	rb(int *stack_b, int len_b)
{
	int	temp;
	int	i;

	if (len_b > 0) 
	{
		temp = stack_b [0];
		i = 1;
		while (stack_b[i])
		{
			stack_b[i - 1] = stack_b[i];
			i++;
		}
		stack_b[i - 1] = temp;
	}
	write(1, "rb\n", 3);
}

int	ft_isdigit(char *c)
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

int	ft_atoi(const char *nptr)
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

int	*filling(char **av)
{
	int	i;
	int	*temp;
	int	j;
	int	*stack_a;

	stack_a = NULL;
	i = 1;
	while (av[i])
	{
		if (ft_isdigit(av[i]))
		{
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
			temp[j] = atoi(av[i]);
			temp[j + 1] = '\0';
			free(stack_a);
			stack_a = temp;
		}
		else
			write(1, "erreur\n", 7);
		i++;
	}
	return (stack_a);
}
