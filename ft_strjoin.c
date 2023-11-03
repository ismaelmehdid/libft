/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:39:38 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/04 00:05:30 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*array;
	int		e;

	i = 0;
	e = 0;
	array = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (array == NULL)
		return (NULL);
	while (s1[i])
	{
		array[e] = s1[i];
		e++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		array[e] = s2[i];
		i++;
		e++;
	}
	array[e] = '\0';
	return (array);
}
