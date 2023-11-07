/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:18 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/07 17:47:06 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sizedst;
	size_t	sizesrc;
	size_t	i;
	size_t	e;

	i = 0;
	e = 0;
	if (size == 0 && dst == NULL)
		return ((size_t)ft_strlen(src));
	sizedst = (size_t)ft_strlen(dst);
	sizesrc = (size_t)ft_strlen(src);
	if (size == 0)
		return (sizesrc);
	if (size < sizedst)
		return (sizesrc + size);
	if (size == sizedst)
		return (sizedst + sizesrc);
	i += sizedst;
	while ((size - sizedst - 1) > e && src[e])
		dst[i++] = src[e++];
	dst[i] = '\0';
	return (sizedst + sizesrc);
}
