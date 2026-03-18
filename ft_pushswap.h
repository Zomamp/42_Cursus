/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 21:19:13 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/03/18 07:20:52 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PUSHSWAP_H
#define FT_PUSHSWAP_H

#include "LIBFT/libft.h"
#include "LIBFTPRINTF/ft_printf.h"
t_list		*ft_add_stack(char **argv, int argc);
void		ft_print_list(t_list *stack_a);
void		ft_rotate(t_list **stack);
void		ft_switch(t_list **stack);
void		ft_rotate_reverse(t_list **stack);
void		ft_sa(t_list **stack);
void		ft_sb(t_list **stack);
void		ft_ss(t_list **stack_a, t_list **stack_b);
void		ft_ra(t_list **stack);
void		ft_rb(t_list **stack);
void		ft_rr(t_list **stack_a, t_list **stack_b);
void		ft_rra(t_list **stack);
void		ft_rrb(t_list **stack);
void		ft_rrr(t_list **stack_a, t_list **stack_b);
void		ft_pa(t_list **stack_a, t_list **stack_b);
void		ft_pb(t_list **stack_a, t_list **stack_b);
double		ft_compute_disorder(t_list **stack_a);
void		ft_bubble_sort(t_list **stack);
# endif