/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:41 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/01 23:28:41 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	string += i;
	while (i != 0)
	{
		if (*string == searchedChar)
			return ((char *)string);
		string--;
		i--;
	}
	return (NULL);
}
