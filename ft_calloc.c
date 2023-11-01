/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:26:57 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/02 00:35:24 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		*str = '\0';
		str++;
		i++;
	}
}

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*array;

	array = malloc(elementCount * elementSize);
	ft_bzero(array, elementCount);
	return (array);
}
