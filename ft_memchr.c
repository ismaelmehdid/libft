/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:27:40 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/01 23:27:41 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t	i;

	if (!memoryBlock)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (*(unsigned char *)(memoryBlock + i) == (unsigned char)searchedChar)
			return ((void *)(memoryBlock + i));
		i++;
	}
	return (NULL);
}
