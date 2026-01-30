/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 09:21:38 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/01/28 19:25:15 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <stdint.h>    

void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *ptr;
    void    *begin;
    size_t  i;
    
    i = 0;
    begin = malloc(nmemb * size);
    ptr = (unsigned char *)begin;
    if (!begin)
        return (NULL);
    if (nmemb == SIZE_MAX && size == SIZE_MAX)
        return (NULL);
    
    while (i < (nmemb * size))
    {
        ptr[i] = 0;
        i++;
    }
    return (begin);
}