/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:02 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/04 00:30:14 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;
	char	*str;

	str = pointer;
	i = 0;
	while (i != count)
	{
		*str = (unsigned char)value;
		str++;
		i++;
	}
	return (pointer);
}
