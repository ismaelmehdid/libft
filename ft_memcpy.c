/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:27:52 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/06 00:07:53 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t	i;

	i = 0;
	if (!destination && !source && size > 0)
		return (NULL);
	if (size == 0)
		return (destination);
	while (i < size)
	{
		*(unsigned char *)(destination) = *(unsigned char *)(source);
		source++;
		destination++;
		i++;
	}
	return (destination - i);
}
