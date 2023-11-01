/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:07 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/02 00:36:01 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
