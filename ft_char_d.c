/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:24:33 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/21 17:08:28 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		return (-1 * n);
	}
	return (n);
}

static void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return ;
	}
	nb = is_negative(nb);
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', 1);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

void	ft_char_d(va_list args)
{
	int	nb;

	nb = va_arg(args, int);
	ft_putnbr(nb);
}
