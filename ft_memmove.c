/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:27:57 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/06 16:33:50 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (destination);
	if (!destination && !source && size > 0)
		return (destination);
	if (destination > source)
	{
		i = (int)size - 1;
		while (i < size)
		{
			*(unsigned char *)(destination + i)
				= *(unsigned char *)(source + i);
			i--;
		}
		return (destination);
	}
	while (i < size)
	{
		*(unsigned char *)(destination + i)
			= *(unsigned char *)(source + i);
		i++;
	}
	return (destination);
}
