/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:35 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/08 00:02:11 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	e;
	int	j;

	j = 0;
	e = 0;
	if ((int)len < 0)
		len = (size_t)ft_strlen(big);
	if ((big == NULL && len == 0) || (ft_strlen(little) > ft_strlen(big)))
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (big[e] && e < (int)len)
	{
		j = 0;
		while (big[j + e] && little[j] && e + j < (int)len
			&& big[j + e] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + e));
		e++;
	}
	return (NULL);
}
