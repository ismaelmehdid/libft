/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:16:55 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/03 23:23:08 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**fill(char **array, char const *s, char c)
{
	int	i;
	int	j;
	int	e;

	j = 0;
	i = 0;
	e = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
		{
			array[j][e] = s[i];
			i++;
			e++;
		}
		array[j][e] = '\0';
		e = 0;
		j++;
	}
}

int	countwords(char const *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
			i++;
		words++;
	}
	return (words);
}

char	**malloceacharray(char **array, char const *s, char c)
{
	int	i;
	int	wordsize;
	int	j;

	j = 0;
	wordsize = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
		{
			wordsize++;
			i++;
		}
		array[j] = malloc(sizeof(char) * wordsize + 1);
		j++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	i = 0;
	array = malloc(sizeof(char *) * countwords(s, c));
	array = malloceacharray(array, s, c);
	fill(array, s, c);
	return (array);
}
