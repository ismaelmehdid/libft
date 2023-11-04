/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:41 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/04 20:35:13 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	if (!string)
		return (NULL);
	while (string[i])
		i++;
	string += i;
	while (i != 0)
	{
		if (*string == (char)searchedChar)
			return ((char *)string);
		string--;
		i--;
	}
	if (*string == (char)searchedChar)
		return ((char *)string);
	return (NULL);
}
