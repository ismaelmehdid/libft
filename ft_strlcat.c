/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:18 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/06 23:03:49 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	e;
	int	lendst;
	int	lensrc;

	if (size == 0)
		return (0);
	i = 0;
	e = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i += lendst;
	while (i < (int)size && src[e])
	{
		dst[i] = src[e];
		e++;
		i++;
	}
	dst[i] = '\0';
	return (lensrc + lendst);
}
