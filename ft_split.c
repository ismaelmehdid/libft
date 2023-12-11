/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:16:55 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/13 12:32:21 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freeall(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	**fill(char **array, char const *s, char c)
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

static int	countwords(char const *s, char c)
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

static char	**malloceacharray(char **array, char const *s, char c, int i)
{
	int	wordsize;
	int	j;

	j = 0;
	wordsize = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i + wordsize] != c && s[i + wordsize] != '\0')
			wordsize++;
		i += wordsize;
		array[j] = malloc(sizeof(char) * wordsize + 1);
		if (array[j] == NULL)
		{
			ft_freeall(array);
			return (NULL);
		}
		j++;
		wordsize = 0;
	}
	array[j] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * countwords(s, c) + sizeof(char *));
	if (array == NULL)
		return (NULL);
	array = malloceacharray(array, s, c, i);
	if (array == NULL)
		return (NULL);
	fill(array, s, c);
	return (array);
}
