/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 23:31:41 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/03/22 07:33:56 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_is_three(t_list **stack)
{
	int	biggest;

	biggest = ft_find_bigest(stack);
	if (*(int *)(*stack)->content == biggest)
		ft_ra(stack);
	if (*(int *)(*stack)->next->content == biggest)
		ft_rra(stack);
	if (*(int *)(*stack)->content > *(int *)(*stack)->next->content)
		ft_sa(stack);
}

void	ft_is_five(t_list **stack_a, t_list **stack_b)
{
	int pushed;

	pushed = 0;
	if (ft_is_sorted(stack_a))
		return ;
	while (pushed < 2)
	{ 
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
		{
			ft_pb(stack_a, stack_b);
			pushed++;
		}
		else
			ft_ra(stack_a);
	}	

	ft_is_three(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);

	// Protection finale
	if (*(int *)(*stack_a)->content > *(int *)(*stack_a)->next->content)
		ft_sa(stack_a);
}

void	ft_bubble_sort(t_list **stack)
{
	int		sorted;
	int		size;
	int		i;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	sorted = 0;

	// Calcul de la taille initiale de la liste
	size = ft_lstsize(*stack); // Fonction externe à implémenter

	while (!sorted)
	{
		sorted = 1;
		i = 0;

		// Perform a single bubble sort pass
		while (i < size - 1)
		{
			if (*(int *)((*stack)->content) > *(int *)((*stack)->next->content))
			{
				ft_sa(stack); // Échange les deux premiers éléments
				sorted = 0;  // Indique qu'un tri est encore nécessaire
			}
			ft_ra(stack); // Fait une rotation
			i++;
		}
		// Remettre les rotations à l'état initial
		while (i-- > 0)
			ft_rra(stack);
	}
}

void	ft_simple_sort(t_list **stack)
{
	int		size;
	t_list	*stack_b;

	if (!stack || !*stack || !(*stack)->next)
		return ;

	size = ft_lstsize(*stack);

	if (size == 3)
		ft_is_three(stack);
	else if (size == 5)
	{
		stack_b = NULL;
		ft_is_five(stack, &stack_b);
	}
	else
		ft_bubble_sort(stack);
}
