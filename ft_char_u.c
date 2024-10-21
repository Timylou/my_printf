/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:01:44 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/21 17:10:00 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printuint(unsigned int nb)
{
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', 1);
		return ;
	}
	ft_printuint(nb / 10);
	ft_printuint(nb % 10);
}

void	ft_char_u(va_list args)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	ft_printuint(nb);
}
