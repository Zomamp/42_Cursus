/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <:zo-rakot@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:26:10 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/02/05 14:49:03 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static  int ft_calcul (int n)
{
    int len;

    len = 0;
    if (n <= 0)
    {
        len++;
        n = -n;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
}
    return (len);
}

char    *ft_itoa(int n)
{
    int len;
    char *result;
    size_t num;

    num = (size_t)n;
    len = ft_calcul(n);
    result = (char *) ft_calloc(sizeof(char), (len + 1));
    if (!result)
        return (NULL);
    result[len] = '\0';
    if (num < 0)
    {
        result[0] = '-';
        num = -num;
    }
    while (len > 0 && result[len] != '-')
    {
        result[len] = (num % 10 + '0');
        num /= 10;
        len --;   
    }
    return (result);
}