NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRCS = ft_printf.c ft_printf_utils.c ft_printf_utils2.c

OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME) $(OBJS)

re: fclean all

.PHONY: re clean fclean all
