/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:25:41 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/05 22:30:00 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	temp;
	int	countm;

	countm = 0;
	temp = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32
		|| str[i] == '+' || str[i] == '-')
	{
		if ((str[i] == '+' || str[i] == '-')
			&& ((str[i + 1] == '+' || str[i + 1] == '-')
				|| ((str[i + 1] >= 9 && str[i + 1] <= 13) || str[i + 1] == 32)))
			return (0);
		i++;
	}
	if (str[i - 1] == '-')
		countm++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = temp * 10 + str[i++] - '0';
	}
	if (countm == 1)
		return (-temp);
	return (temp);
}
