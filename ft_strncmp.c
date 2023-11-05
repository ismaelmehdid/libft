/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:31 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/05 22:58:04 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;

	i = 0;
	if (first[0] == '\0' && second[0] == '\0')
		return (0);
	while ((first[i] || second[i]) && i != length)
	{
		if (second[i] != first[i])
			return (((unsigned char)first[i] - (unsigned char)second[i]));
		i++;
	}
	return (0);
}
