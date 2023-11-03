/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 00:23:21 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/04 00:45:22 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t elementCount, size_t elementSize);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

char	*ft_itoa(int n);

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);

int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);

void	*ft_memcpy(void *destination, const void *source, size_t size);

void	*ft_memmove(void *destination, const void *source, size_t size);

void	*ft_memset(void *pointer, int value, size_t count);

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_putstr_fd(char *s, int fd);

char	**ft_split(char const *s, char c);

char	*ft_strchr(const char *string, int searchedChar);

char	*ft_strdup(const char *source);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int		ft_strlen(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		ft_strncmp(const char *first, const char *second, size_t length);

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strrchr(const char *string, int searchedChar);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		ft_tolower(int c);

int		ft_toupper(int c);

#endif