/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:46 by rmidou            #+#    #+#             */
/*   Updated: 2023/10/29 09:19:19 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void	pa(int *stack_a, int size_a, int *stack_b, int size_b);
void	pb(int *stack_a, int size_a, int *stack_b, int size_b);
void	ra(int *stack_A, int len_A);
void	rb(int *stack_B, int len_B);
void	rrb(int *stack_B, int len_B);
void	rra(int *stack_A, int len_A);
void	sa(int *stack_A, int len_A);
size_t	ft_strlen(const int *str);
void	sort_last(int *stack_A);
void	sort_A(int *stack_A);
int		maxi(int *stack);
int		maxii(int *stack);
int		mini(int *stack, int nbr);

#endif
