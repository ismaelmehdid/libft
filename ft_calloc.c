/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:26:57 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/05 22:01:53 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementcount, size_t elementsize)
{
	void	*array;

	array = malloc(elementcount * elementsize);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (elementcount * elementsize));
	return (array);
}
