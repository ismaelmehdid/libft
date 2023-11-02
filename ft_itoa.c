/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:42:42 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/03 00:46:21 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	intlen(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*convert(int n, int len, char *array)
{
	if (n < 0)
	{
		n = abs(n);
		len++;
		array[len] = '\0';
		len--;
		while (len != 0)
		{
			array[len] = n % 10 + '0';
			n = n / 10;
			len--;
		}
		array[len] = '-';
		return (array);
	}
	array[len] = '\0';
	len--;
	while (len != -1)
	{
		array[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (array);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*array;

	len = intlen(n);
	if (n < 0)
		array = malloc(sizeof(char) * len + 2);
	else
		array = malloc(sizeof(char) * len + 1);
	if (array == NULL)
		return (NULL);
	array = convert(n, len, array);
	return (array);
}
