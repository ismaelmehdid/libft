/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 00:23:21 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/02 00:34:43 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *destination, const void *source, size_t size);

void	*ft_memmove(void *destination, const void *source, size_t size);

void	*ft_memset(void *pointer, int value, size_t count);

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);

char	*ft_strchr(const char *string, int searchedChar);

char	*ft_strdup(const char *source);

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strrchr(const char *string, int searchedChar);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);

int		ft_strncmp(const char *first, const char *second, size_t length);

int		ft_strlen(const char *s);

int		ft_atoi(const char *str);

int		ft_tolower(int c);

int		ft_toupper(int c);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

#endif