/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 23:31:41 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/03/17 00:04:34 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_bubble_sort(t_list **stack)
{
	int		sorted;
	t_list	*cur;

	sorted = 0;
	if (!stack || !*stack || !(*stack)->next)
		return ;
	while (!sorted)
	{
		cur = *stack;
		while (cur && cur->next)
		{
			if (*(int *)cur->content < *(int *)cur->next->content)
			{
				ft_sa(stack);
				sorted = 0; // Echange
			}
			ft_ra(stack);
			cur = cur->next;
		}
	}
}