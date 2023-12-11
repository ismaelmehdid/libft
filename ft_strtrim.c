/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:44:53 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/13 12:31:33 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isinset(char achar, char const *set)
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

static int	isend(char const *s1, char const *set, int index)
{
	if (!(isinset(s1[index], set)))
		return (0);
	else
	{
		index++;
		if (!(isinset(s1[index], set)) && s1[index] != '\0')
			return (0);
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

	if (!s1 || !set)
		return (NULL);
	e = 0;
	i = 0;
	len = ft_strlen(s1) - 1;
	while (isinset(s1[i], set) && s1[i])
		i++;
	while ((isinset(s1[len], set)))
		len--;
	len++;
	len -= i;
	if ((len * (-1)) == ft_strlen(s1))
		len = 0;
	array = malloc(sizeof(char) * len + 1);
	if (array == NULL)
		return (NULL);
	while (!(isend(s1, set, i)) && s1[i])
		array[e++] = s1[i++];
	array[e] = '\0';
	return (array);
}
