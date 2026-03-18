/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 23:31:41 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/03/18 00:07:08 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

#include "ft_pushswap.h"

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