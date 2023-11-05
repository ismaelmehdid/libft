/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:16:55 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/05 19:42:50 by imehdid          ###   ########.fr       */
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
			array[j][e++] = s[i++];
		}
		array[j][e] = '\0';
		e = 0;
		j++;
	}
	array[j] = NULL;
	return (array);
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
		array[j++] = malloc(sizeof(char) * wordsize + 1);
		wordsize = 0;
	}
	array[j] = malloc(1);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (c == '\0')
	{
		array = malloc(sizeof(char *));
		if (array == NULL)
			return (NULL);
		array[0] = NULL;
		return (array);
	}
	array = malloc(sizeof(char *) * countwords(s, c) + sizeof(char *));
	if (array == NULL)
		return (NULL);
	array = malloceacharray(array, s, c);
	if (array == NULL)
		return (NULL);
	fill(array, s, c);
	return (array);
}
