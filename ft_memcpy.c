/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:27:52 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/02 00:35:53 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t		i;
	char		*strdest;
	const char	*strsrc;

	strdest = destination;
	strsrc = source;
	i = 0;
	while (i < size)
	{
		*strdest = *strsrc;
		strdest++;
		strsrc++;
		i++;
	}
	*strdest = '\0';
	return (destination);
}
