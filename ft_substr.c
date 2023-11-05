/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:16:37 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/05 02:09:40 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	save;
	char			*array;
	size_t			count;
	int				i;

	save = start;
	i = 0;
	count = 0;
	while (s[start++] && count < len)
		count++;
	array = malloc(sizeof(char) * count + 1);
	if (array == NULL)
		return (NULL);
	start = save;
	if (start < (unsigned int)ft_strlen(s) && len > 0)
	{
		while (s[start] && len > 0)
		{
			array[i++] = s[start++];
			len--;
		}
	}
	array[i] = '\0';
	return (array);
}
