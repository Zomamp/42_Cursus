/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <:zo-rakot@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:58:48 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/02/04 13:22:06 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main (void)
{
    char const *s1 = "Bonjour les amis, mon nom est RakotoBo";
    int start = 1;
    int end = 10;
    char **s = (char **)ft_put_word(s1, start, end);
    printf("%s\n", s);
    ft_free(s);
    return (0);
}