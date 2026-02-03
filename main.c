/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <:zo-rakot@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:58:48 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/02/02 22:55:54 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

 char  *ft_put_word(char const *str, int start, int end)
{
    int begin;
    char *stock;
    int i;
   
    stock = malloc(sizeof(char) * (end - start + 1));
    if (!stock)
        return (NULL);
    begin = start;
    i = 0;
    while (begin < end)
    {
        stock[i] = str[begin];
        begin++;
        i++;
    }
    stock[begin] = '\0';
    return (stock);
}

/* void ft_free(char **str)
{
    int i;

    i = 0;
    while (str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
} */


int main (void)
{
    char const *s1 = "Bonjour les amis, mon nom est RakotoBo";
    int start = 1;
    int end = 10;
    char **s = (char **)ft_put_word(s1, start, end);
    printf("%s\n", s);
    ft_free(s);
    return (0);
}