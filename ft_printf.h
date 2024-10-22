/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:20:44 by yel-mens          #+#    #+#             */
/*   Updated: 2024/10/22 17:20:05 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);

void	ft_char_c(va_list args, int *count);
void	ft_char_s(va_list args, int *count);
void	ft_char_p(va_list args, int *count);
void	ft_char_d(va_list args, int *count);
void	ft_char_i(va_list args, int *count);
void	ft_char_u(va_list args, int *count);
void	ft_char_x(va_list args, int *count);
void	ft_char_xupper(va_list args, int *count);
void	ft_char_dorian(int *count);

void	ft_putchar_fd(char c, int fd, int *count);
void	ft_putstr_fd(char *s, int fd, int *count);
void	ft_putnbr_fd(int nb, int fd, int *count);
#endif
