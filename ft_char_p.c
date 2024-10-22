/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:10:19 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/22 18:07:38 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printptr(unsigned long int ptr, int *count)
{
	if (ptr < 16)
	{
		if (ptr > 9)
			ft_putchar_fd(ptr - 10 + 'a', 1, count);
		else
			ft_putchar_fd(ptr + '0', 1, count);
		return ;
	}
	ft_printptr(ptr / 16, count);
	ft_printptr(ptr % 16, count);
}

void	ft_char_p(va_list args, int *count)
{
	unsigned long	address;

	address = (unsigned long)va_arg(args, void *);
	if (!address)
		return (ft_putstr_fd("(nil)", 1, count));
	ft_putstr_fd("0x", 1, count);
	ft_printptr(address, count);
}
