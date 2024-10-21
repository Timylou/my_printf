NAME	=	libftprintf.a

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra -g

AR		=	ar rcs

SRC		=	ft_printf.c ft_char_c.c ft_char_s.c ft_char_d.c \
			ft_char_u.c ft_char_x.c ft_char_xupper.c ft_char_dorian.c \
			ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c
OBJ		=	$(SRC:.c=.o)

all		:	$(NAME)

clean	:
	rm -rf $(OBJ)

fclean	:	clean
	rm -rf $(NAME)

re		:	fclean all

$(NAME)	:	$(OBJ)
	$(AR) $@ $^

$(OBJ)	:	$(SRC)
	$(CC) $(CFLAGS) -c $^

.PHONY	:	all clean fclean re
