/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 23:08:25 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/01/28 21:11:03 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    const char  *str;

    i = 0;
    str = s;
    while (i < n)
     {
        if (str[i] == (char) c)
            return ((char *)&str[i]);
        i++;
     }
     return (NULL);
}
