/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:01:44 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/21 18:57:13 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printuint(unsigned int nb, int *count)
{
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', 1, count);
		return ;
	}
	ft_printuint(nb / 10, count);
	ft_printuint(nb % 10, count);
}

void	ft_char_u(va_list args, int *count)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	ft_printuint(nb, count);
}
