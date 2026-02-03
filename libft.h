/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zo-rakot <:zo-rakot@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:39:47 by zo-rakot          #+#    #+#             */
/*   Updated: 2026/02/03 00:19:14 by zo-rakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

int		ft_atoi(const char *nptr);
void	*ft_bzero(void *ptr, unsigned int n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int str);
int		ft_isdigit(int str);
int		ft_isprint(int str);
void	*ft_memset(void *ptr, unsigned int val, int n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t  ft_strlen(const char *str);
int		ft_tolower(int c);
void	*ft_memset(void *s, unsigned int c, int n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
char    *ft_strtrim(char const *s1, char const *set);
void    *ft_calloc(size_t nmemb, size_t size);
char    **ft_split(char const *s, char c);
#endif
