/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 21:44:36 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/03/16 00:21:24 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

t_list	*ft_add_stack(char **argv, int argc)
{
	t_list	*stack_a;
	t_list	*new;
	int		i;
	int		*cast;

	// i = 1 cause if we have i = 0, so we call the name of the program
	// Example : ./a.out 42 == if i = 0, so we print "./a.out" , not 42 
	stack_a = NULL;
	i = 1;
	while (i < argc)
	{
		cast = malloc(sizeof(int));
		if (!cast)
		{
			ft_lstclear(&stack_a, free);
			return (NULL);
		}
		// Using atoi for the convertion , ex if we have "42" == atoi == 42
		*cast = ft_atoi(argv[i]);
		new = ft_lstnew(cast);
		if (!new)
		{
			// Deleting the list and free the memories
			ft_lstclear(&stack_a, free);
			return (NULL);
		}
		ft_lstadd_back(&stack_a, new);
		i++;
	}
	return (stack_a);
}

void	ft_print_list(t_list *stack_a)
{
	// Error
	if (!stack_a)
		ft_putstr_fd("[]", 2);
	// while stack_a exist
	while (stack_a)
	{
		ft_printf("%d", *(int *)stack_a->content);
		stack_a = stack_a->next;
	}	
}
