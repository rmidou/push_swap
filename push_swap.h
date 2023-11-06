/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmidou <rmidou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:46 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/06 12:47:12 by rmidou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		*ft_filling(char **av);
void	pa(int *stack_a, int size_a, int *stack_b, int size_b);
void	pb(int *stack_a, int size_a, int *stack_b, int size_b);
void	ra(int *stack_a, int len_a);
void	rb(int *stack_b, int len_b);
void	rrb(int *stack_b, int len_b);
void	rra(int *stack_a, int len_a);
void	sa(int *stack_a, int len_a);
size_t	ft_strlen(const int *str);
int		maxi(int *stack);
int		maxii(int *stack);
int		minimum_adresse(int *stack);
int		minimum(int *stack);
int		mini(int *stack, int nbr);
int		mini_adresse(int *stack, int nbr);
int		ft_mini_moove(int nb, int nb_adresse, int *stack_to, int len_stack_in);
void	set_at_place(int *stack_a, int *stack_b);
void	set_at_placeb(int *stack_a, int *stack_b);
void	sort_last(int *stack_a);
void	sort_a(int *stack_a);
void	sort_all(int *stack_a);
void	sort_b(int *stack_b);
int		*ft_striteri(int *s, int *stack_to, int len_stack_in);

#endif
