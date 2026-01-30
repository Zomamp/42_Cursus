/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <zo-rakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:37:00 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/01/28 21:11:13 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t len)
{
  char  *d;
  char  *s;
  size_t  i;

  i = 0;
  s = (char *)src;
  d = (char *)dest;
  
  if (d == s || len == 0)
    return (d);

  if (d < s)
  {
      while (i < len)
	    {
		    d[i] = s[i];
		    i++;
    	}
  }
  else
    {
      while (len > 0)
	    {
		    len--;
		    d[len] = s[len];
  	  }
    }
  return (d);
}