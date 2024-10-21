/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:08:19 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/21 19:11:44 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char_s(va_list args, int *count)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
		ft_putstr_fd("(null)", 1, count);
	else
		ft_putstr_fd(str, 1, count);
}
