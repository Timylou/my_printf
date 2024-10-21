/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:38:12 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/21 19:09:03 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_negative(int n, int fd, int *count)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd, count);
		return (-1 * n);
	}
	return (n);
}

void	ft_putnbr_fd(int nb, int fd, int *count)
{
	if (fd < 0)
		return ;
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd, count);
		return ;
	}
	nb = is_negative(nb, fd, count);
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', fd, count);
		return ;
	}
	ft_putnbr_fd(nb / 10, fd, count);
	ft_putnbr_fd(nb % 10, fd, count);
}
