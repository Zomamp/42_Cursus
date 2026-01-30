/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:58:48 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/01/30 21:49:06 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main (void)
{
    char const *s1 = "Bonjour les amis, mon nom est RakotoBo";
    char set = 'B';

    printf("%c\n", ft_split(s1, set));
    return (0);
}