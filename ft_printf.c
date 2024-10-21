/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:19:27 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/21 18:11:19 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_switch(char item, va_list args)
{
	if (item == 'c')
		ft_char_c(args);
	else if (item == 's')
		ft_char_s(args);
	else if (item == 'p')
	{
		ft_putstr_fd("0x", 1);
		ft_char_x(args);
	}
	else if (item == 'd' || item == 'i')
		ft_char_d(args);
	else if (item == 'u')
		ft_char_u(args);
	else if (item == 'x')
		ft_char_x(args);
	else if (item == 'X')
		ft_char_xupper(args);
	else if (item == '%')
		ft_char_dorian();
}

static int	ft_isformat(char item)
{
	if (item == 'c' || item == 's' || item == 'p' || item == 'd'
		|| item == 'u' || item == 'x' || item == 'X' || item == '%')
		return (1);
	return (0);
}

static int	ft_parse(const char *str, va_list args)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_isformat(str[i + 1]))
		{
			i++;
			ft_switch(str[i], args);
			count++;
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			i++;
		}
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	if (!str)
		return (-1);
	va_start(args, str);
	count = ft_parse(str, args);
	va_end(args);
	return (count);
}
