/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:01:28 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/21 18:54:17 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char_c(va_list args, int	*count)
{
	char	character;

	character = va_arg(args, int);
	if (!character)
		ft_putstr_fd("(null)", 1, count);
	else
		ft_putchar_fd(character, 1, count);
}
