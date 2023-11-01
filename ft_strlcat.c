/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:18 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/02 00:36:05 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	e;
	size_t	j;

	e = 0;
	j = 0;
	while (dst[e])
		e++;
	while ((e + j) < size)
	{
		if (src[j] == '\0')
			return (j + e);
		dst[e + j] = src[j];
		j++;
	}
	return (j + e);
}
