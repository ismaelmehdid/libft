/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:27:45 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/02 00:35:51 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (*(unsigned char *)(pointer1 + i)
			!= *(unsigned char *)(pointer2 + i))
			return (*(unsigned char *)(pointer1 + i)
			- *(unsigned char *)(pointer2 + i));
		i++;
	}
	return (0);
}
