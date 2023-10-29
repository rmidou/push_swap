/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:46 by rmidou            #+#    #+#             */
/*   Updated: 2023/10/28 13:53:08 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

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

#endif
