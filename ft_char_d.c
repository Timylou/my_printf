/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:24:33 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/21 19:11:24 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_negative(int n, int *count)
{
	if (n < 0)
	{
		ft_putchar_fd('-', 1, count);
		return (-1 * n);
	}
	return (n);
}

static void	ft_putnbr(int nb, int *count)
{
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1, count);
		return ;
	}
	nb = is_negative(nb, count);
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', 1, count);
		return ;
	}
	ft_putnbr(nb / 10, count);
	ft_putnbr(nb % 10, count);
}

void	ft_char_d(va_list args, int *count)
{
	int	nb;

	nb = va_arg(args, int);
	ft_putnbr(nb, count);
}
