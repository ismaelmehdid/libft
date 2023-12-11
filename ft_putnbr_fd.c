/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imehdid <imehdid@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:55:40 by imehdid           #+#    #+#             */
/*   Updated: 2023/11/03 19:43:51 by imehdid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int const	save = n;
	char		temp;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	else if (n <= 9 && n >= 0)
	{
		temp = n + '0';
		write (fd, &temp, 1);
	}
	else if (n > 9)
	{
		n = save / 10;
		ft_putnbr_fd(n, fd);
		n = save % 10;
		ft_putnbr_fd(n, fd);
	}
}
