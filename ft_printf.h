/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:20:44 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/21 18:03:24 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);

void	ft_char_c(va_list args);
void	ft_char_s(va_list args);
void	ft_char_d(va_list args);
void	ft_char_i(va_list args);
void	ft_char_u(va_list args);
void	ft_char_x(va_list args);
void	ft_char_xupper(va_list args);
void	ft_char_dorian(void);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
#endif
