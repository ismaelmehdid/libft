/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:07 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/01 23:28:08 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *string, int searchedChar)
{
	if (!searchedChar)
		return (NULL);
	while (*string)
	{
		if (*string == searchedChar)
			return ((char *)string);
		string++;
	}
	return (0);
}
