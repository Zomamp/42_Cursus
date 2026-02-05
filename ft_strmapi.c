/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <:zo-rakot@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:40:10 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/02/04 16:47:58 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *dest;
    size_t len;
    
    len = ft_strlen(s);
    i = 0;
    dest = malloc(sizeof(char) * (len + 1));
    if (!dest)
        return (NULL);
  /*   if (!s || !len)
        return (0); */
    while (s[i])
    {
        dest[i] = (f)(i, (char)s[i]);
        i++;
    }
    dest[i] = '\0';
    return (dest);
}