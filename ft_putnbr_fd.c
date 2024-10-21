/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:38:12 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/21 17:13:18 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_negative(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		return (-1 * n);
	}
	return (n);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (fd < 0)
		return ;
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	nb = is_negative(nb, fd);
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', fd);
		return ;
	}
	ft_putnbr_fd(nb / 10, fd);
	ft_putnbr_fd(nb % 10, fd);
}
