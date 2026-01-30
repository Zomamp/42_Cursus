/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:14:14 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/01/30 21:50:04 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char **ft_split(char const *s, char c)
{
    size_t  count;

    count = 0;
    if(!s)
        return (NULL);
    while (s[count] != '\0' && ft_strchr(s[count], c))
        count++;
    return (ft_substr(s, c, count));
}