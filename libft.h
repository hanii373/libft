/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gogalsty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:50:14 by gogalsty          #+#    #+#             */
/*   Updated: 2026/02/04 16:30:04 by gogalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>

void			ft_bzero(void *m, size_t n);
int				ft_isalnum(int nm);
int				ft_isalpha(int n);
int				ft_isascii(int asc);
int				ft_isdigit(int m);
int				ft_isprint(int print);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t			ft_strlen(const char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_tolower(char *str);
int				ft_toupper(char *str);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_atoi(char *str);
void			*ft_calloc(size_t nmemb, size_t size);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(char *str);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strrchr(const char *s, int c);

#endif
