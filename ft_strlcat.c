/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:12:30 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/01/28 21:11:30 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "bsd/string.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	// int	j;
    size_t j;

	i = 0;
	j = 0;
    j = ft_strlen(dst);
	if (size <= j)
		return (ft_strlen(src) + size);
	while (src[i] && (j + i) < size - 1)
	{
		dst[i + j] = src[i];
		i++;
	}
    dst[i + j] = '\0';
	/* if (j < size) */
    return (j + ft_strlen((char *)src));
	/* else
        return (j + size); */
}
