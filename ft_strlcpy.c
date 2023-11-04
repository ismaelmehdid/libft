/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:22 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/04 21:41:56 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	if (!src)
		return (0);
	while (src[len])
		len++;
	if (size > 0)
	{
		while (i < (int)size)
		{
			*(char *)dst = *(char *)src;
			dst++;
			src++;
			i++;
		}
		*(char *)dst = '\0';
	}
	return (len);
}
