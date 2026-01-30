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

void *ft_calloc(size_t nmemb, size_t size)
{
    int tab;
    int stock;
    
    stock = nmemb * size;
    tab = malloc((nmemb * size) * sizeof(int));
    if (!tab)
        return (NULL);
    if (stock > tab)
        return (1);
    if (nmemb == 0 || size == 0)
        return (NULL);
    ft_bzero(tab, (nmemb * size));
}