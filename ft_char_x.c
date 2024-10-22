/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:13:58 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/22 17:59:54 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printptr(unsigned long ptr, int *count)
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
	unsigned int	ptr;

	ptr = va_arg(args, unsigned int);
	ft_printptr((unsigned long)ptr, count);
}
