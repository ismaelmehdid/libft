/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:44:53 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/02 18:55:24 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isinset(char achar, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (achar == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	isend(char const *s1, char const *set, int index)
{
	if (!(isinset(s1[index], set)))
		return (0);
	else
	{
		index++;
		while (s1[index])
		{
			if (s1[index + 1] == '\0')
				return (1);
			if (!(isinset(s1[index], set)))
				return (0);
			index++;
		}
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*array;
	int		i;
	int		len;
	int		e;

	e = 0;
	i = 0;
	len = ft_strlen(s1);
	len--;
	while (s1[i] && isinset(s1[i], set))
		i++;
	while (isinset(s1[len], set) && len != 0)
		len--;
	len -= i;
	len += 1;
	array = malloc(sizeof(char) * len + 1);
	while (!(isend(s1, set, i)) && s1[i])
	{
		array[e] = s1[i];
		e++;
		i++;
	}
	array[e] = '\0';
	return (array);
}
