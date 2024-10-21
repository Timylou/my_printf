/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:13:58 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/21 19:10:34 by yel-mens         ###   ########.fr       */
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

void	ft_char_x(va_list args, int *count)
{
	unsigned long int	ptr;

	ptr = va_arg(args, unsigned long int);
	ft_printptr(ptr, count);
}
