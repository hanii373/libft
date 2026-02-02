/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gogalsty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:50:14 by gogalsty          #+#    #+#             */
/*   Updated: 2026/02/02 17:42:14 by gogalsty         ###   ########.fr       */
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
int				ft_lower(char *str);
int				ft_upper(char *str);
#endif
