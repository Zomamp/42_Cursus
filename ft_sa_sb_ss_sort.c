/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa_sb_ss_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 23:10:13 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/03/18 07:17:58 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_switch(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	ft_sa(t_list **stack)
{
	ft_switch(stack);
	ft_putendl_fd("sa", 1);
}

void	ft_sb(t_list **stack)
{
	ft_switch(stack);
	ft_putendl_fd("sb", 1);
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_sa(stack_a);
	ft_sb(stack_b);
	ft_putendl_fd("ss", 1);
}