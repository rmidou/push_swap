/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:46 by rmidou            #+#    #+#             */
/*   Updated: 2023/11/22 15:43:16 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

int		*ft_filling(char **av, int *len_a, int ac);
void	pa(int *stack_a, int size_a, int *stack_b, int size_b);
void	pb(int *stack_a, int size_a, int *stack_b, int size_b);
void	ra(int *stack_a, int len_a);
void	rb(int *stack_b, int len_b);
void	rrb(int *stack_b, int len_b);
void	rra(int *stack_a, int len_a);
void	sa(int *stack_a, int len_a);
size_t	ft_strlen(const int *str);
int		maxi(int *stack, int len_stack);
int		maxii(int *stack, int len_stack);
int		minimum_adresse(int *stack, int len_stack);
int		minimum(int *stack, int len_stack);
int		mini(int *stack, int nbr, int len_stack);
int		mini_adresse(int *stack, int nbr, int len_stack);
int		*ft_striteri(int *s, int *stack_to, int len_stack_in, 
			int len_stack_to);
void	set_at_place(int *stack_a, int *stack_b, int len_a, int len_b);
void	set_at_placeb(int *stack_a, int *stack_b, int len_a, int len_b);
void	sort_a(int *stack_a, int len_a);
void	sort_all(int *stack_a, int len_a);
void	sort_b(int *stack_b, int len_b);
void	ft_error(void);
int		ft_dup(const int *src, int len_src);
char	**ft_split(char const *s, char c);

#endif
