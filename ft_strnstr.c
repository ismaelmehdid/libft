/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:35 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/02 00:36:19 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	e;
	int	j;

	e = 0;
	j = 0;
	while (little[j])
		j++;
	while (*big && len != 0)
	{
		if (*big == little[0])
		{
			while (*big == little[e])
			{
				e++;
				if (e == j)
					return ((char *)(big - e + 1));
				big++;
			}
		}
		len --;
		big++;
		e = 0;
	}
	return (NULL);
}
