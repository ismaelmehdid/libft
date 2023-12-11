/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:42:42 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/05 02:50:04 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static unsigned int	ft_abs(int n)
{
	if (n == -2147483648)
		return (-((unsigned int)n));
	if (n < 0)
		return (-((unsigned int)n));
	return (-((unsigned int)n));
}

static char	*convert(int n, int len, char *array)
{
	unsigned int	value;

	value = ft_abs(n);
	if (n < 0)
	{
		len++;
		array[len] = '\0';
		len--;
		while (len != 0)
		{
			array[len--] = value % 10 + '0';
			value = value / 10;
		}
		array[len] = '-';
		return (array);
	}
	array[len] = '\0';
	len--;
	while (len != -1)
	{
		array[len--] = n % 10 + '0';
		n = n / 10;
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
