/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:26:57 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/10 14:01:38 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementcount, size_t elementsize)
{
	void	*array;

	if ((long)elementcount == 0 || (long)elementsize == 0)
		return (malloc(1));
	if (((elementcount * elementsize) / elementcount) != elementsize)
		return (NULL);
	array = malloc(elementcount * elementsize);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (elementcount * elementsize));
	return (array);
}
