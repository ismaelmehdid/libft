/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:16:37 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/02 15:36:07 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*array;
	size_t	save;

	save = len;
	array = malloc(len + 1);
	if (array == NULL)
		return (NULL);
	s += start;
	while (len != 0)
	{
		*array = *s;
		array++;
		s++;
		len--;
	}
	*array = '\0';
	return (array - save);
}
