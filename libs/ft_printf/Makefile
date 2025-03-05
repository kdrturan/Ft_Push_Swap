NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 

MSRCS = ft_digitlen.c \
		ft_isdigit.c \
		ft_print_c_type.c \
		ft_print_di_type.c \
		ft_print_p_type.c \
		ft_print_percent_type.c \
		ft_print_s_type.c \
		ft_print_u_type.c \
		ft_print_x_type.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putdigit.c \
		ft_puthex.c \
		ft_putptr.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_uatoi.c 

BSRCS = ft_flag_utils_bonus.c \
		ft_put_utils_bonus.c \
		ft_put_utils1_bonus.c \
		ft_put_utils2_bonus.c \
		ft_put_utils3_bonus.c \
		ft_put_utils4_bonus.c \
		ft_put_utils5_bonus.c \
		ft_put_utils6_bonus.c \
		ft_put_utils7_bonus.c \
		ft_put_utils8_bonus.c \
		ft_put_utils9_bonus.c \
		ft_put_utils10_bonus.c \
		ft_put_utils11_bonus.c \
		ft_put_utils12_bonus.c \
		ft_len_utils_bonus.c		

MOBJS = $(MSRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)

all: $(NAME) bonus

$(NAME): $(MOBJS)
	ar rc $(NAME) $(MOBJS) 

bonus: $(MOBJS) $(BOBJS)
	ar rc $(NAME) $(MOBJS) $(BOBJS)

clean:
	$(RM) $(MOBJS) $(BOBJS)

fclean:	clean
	$(RM) $(NAME) 
	
re: fclean all

.PHONY: all bonus clean fclean re