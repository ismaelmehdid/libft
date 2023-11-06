/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:22 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/06 19:09:19 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		len;

	len = 0;
	i = 0;
	len = ft_strlen(src);
	if (!*src)
	{
		*dst = '\0';
		return (0);
	}
	if (size > 0)
	{
		while (i < size - 1 && *src)
		{
			*dst = *src;
			dst++;
			src++;
			i++;
		}
		*dst = '\0';
		return (len);
	}
	return (len);
}
