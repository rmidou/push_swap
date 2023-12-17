/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:53 by rmidou            #+#    #+#             */
/*   Updated: 2023/12/17 17:40:17 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const int *str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	ft_error(void)
{
	write (1, "Error\n", 6);
	exit(0);
}

int	ft_dup(const int *src, int len_src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i + 1 < len_src)
	{
		j = i + 1;
		while (j < len_src)
		{
			if (src[i] == src[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strlenn(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	atoi_error(int *stack_a)
{
	free(stack_a);
	ft_error();
}
