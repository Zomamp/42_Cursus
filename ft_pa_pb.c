/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 19:05:32 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/03/16 19:38:58 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list *stack_tmp;

	// S'il n'y a pas de stack_b alors il n'y a pas d'echange
	if (!*stack_b)
		return ;
	stack_tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	stack_tmp->next = *stack_a;
	*stack_a = stack_tmp;
}

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack_tmp;
	
	if (!*stack_a)
		return ;
	stack_tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	stack_tmp->next = *stack_b;
	*stack_b = stack_tmp;
}