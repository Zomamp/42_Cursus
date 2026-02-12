/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <:zo-rakot@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:32:45 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/02/12 14:22:44 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*dest;
	char	*src;
	char	*concate;

	i = 0;
	j = 0;
	dest = (char *)s1;
	src = (char *)s2;
	concate = malloc(sizeof(char) * (ft_strlen(dest) + ft_strlen(src) + 1));
	if (!concate)
		return (NULL);
	while (dest[i] != '\0')
	{
		concate[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
	{
		concate[i + j] = src[j];
		j++;
	}
	concate[i + j] = '\0';
	return (concate);
}
