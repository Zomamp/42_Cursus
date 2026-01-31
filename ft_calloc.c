/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <:zo-rakot@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 09:21:38 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/01/31 05:04:02 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <stdint.h>    

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *begin;
   
    if (size != 0 && nmemb > SIZE_MAX / size)
        return (NULL);
    begin = malloc(nmemb * size);
    if (!begin)
        return (NULL);
    ft_memset(begin, 0, nmemb * size);
    return (begin);
}