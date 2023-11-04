/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:27:57 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/04 18:49:10 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	int	i;

	if (destination > source)
	{
		i = (int)size--;
		while (i >= 0)
		{
			*(unsigned char *)(destination + i)
				= *(unsigned char *)(source + i);
			i--;
		}
	}
	else
	{
		i = (int)size;
		while (i >= 0)
		{
			*(unsigned char *)(destination + i)
				= *(unsigned char *)(source + i);
			i--;
		}
	}
	return (destination);
}
