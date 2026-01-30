/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:01:14 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/01/28 21:41:30 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

 char *ft_strchr(const char *s, int c)
 {
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == (char) c)
            return ((char *) &s[i]);
        i++;
    }
    if (c == '\0')
        return ((char *)&s[i]);
    return (NULL);
 }