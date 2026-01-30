/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 01:52:51 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/01/28 21:11:06 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned const char *S_1;
    unsigned const char *S_2;
    
    S_1 = s1;
    S_2 = s2;
    i = 0;
    while (i < n)
    {
        if (S_1[i] != S_2[i])
            return (S_1[i] - S_2[i]);
        i++;
    }
    return (0);
}
