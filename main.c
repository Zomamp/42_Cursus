/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 22:14:43 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/03/16 22:40:39 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int	main (int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc < 2)
		return (-1);
	stack_a = ft_add_stack(argv, argc);
	stack_b = NULL;
	if (!stack_a)
	{
		ft_printf("Error in the list creation");
		return (-1);
	}
	ft_printf("The stack is created : ");
	ft_print_list(stack_a);
	/**************SA SORT**********************/
	// Utilisation de la methode sa
	ft_putchar('\n');
	ft_printf("sa :");
	ft_sa(&stack_a);
	ft_print_list(stack_a);

	// Utilisation de la methode sb
	ft_putchar('\n');
	ft_printf("sb :");
	ft_sb(&stack_b);
	ft_print_list(stack_b);

	// Utilisation de la methode ss
	ft_putchar('\n');
	ft_printf("ss :");
	ft_ss(&stack_a, &stack_b);
	ft_print_list(stack_a);
	ft_print_list(stack_b);

	/**************RA SORT******************/

	// Utilisation de la methode ra
	ft_putchar('\n');
	ft_printf("ra :");
	ft_ra(&stack_a);
	ft_print_list(stack_a);

	// Utilisation de la methode rb
	ft_putchar('\n');
	ft_printf("rb :");
	ft_rb(&stack_b);
	ft_print_list(stack_b);

	// Utilisation de la methode rr
	ft_putchar('\n');
	ft_printf("rr :");
	ft_rr(&stack_a, &stack_b);
	ft_print_list(stack_a);
	ft_print_list(stack_b);
	
	/***************RRA SORT********************/

	// Utilisation de la methode rra
	ft_putchar('\n');
	ft_printf("rra :");
	ft_rra(&stack_a);
	ft_print_list(stack_a);

	// Utilisation de la methode rrb
	ft_putchar('\n');
	ft_printf("rrb :");
	ft_rrb(&stack_b);
	ft_print_list(stack_b);

	// Utilisation de la methode rrr
	ft_putchar('\n');
	ft_printf("rrr :");
	ft_rrr(&stack_a, &stack_b);
	ft_print_list(stack_a);
	ft_print_list(stack_b);

	/***************RRA SORT********************/

	// Utilisation de la methode pa
	ft_putchar('\n');
	ft_printf("pa :");
	ft_pa(&stack_a, &stack_b);
	ft_print_list(stack_a);

	// Utilisation de la methode pb
	ft_putchar('\n');
	ft_printf("pb :");
	ft_pb(&stack_a, &stack_b);
	ft_print_list(stack_b);

	/*****************DISORDERS***********************/
	double d = ft_compute_disorder(&stack_a);
	int display = (int)(d * 100 + 0.5); // 2 décimales
	ft_putchar('\n');
	ft_printf("Disorder: %d%%", display);
	
	// clear all t_list for no leaks
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	return (0);
}