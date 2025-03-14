NAME = push_swap
CC = cc -g
CFLAGS = -Wall -Wextra -Werror
LIBFT = libs/libft/libft.a
PRINTF = libs/ft_printf/libftprintf.a

SRCS = srcs/algorithm.o srcs/algorithm_utils.o srcs/error_handler.o srcs/operations1.o srcs/operations2.o srcs/operations.o srcs/parse.o srcs/push_swap.o srcs/stack_utils1.o srcs/stack_utils.o

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) \
	$(LIBFT) \
	$(PRINTF) \
	-o $(NAME)
	@echo DONE!

%.o: %.c
	@$(CC) $(CFLAGS) -c \
	-I./inc \
	-I./libs/libft \
	-I./libs/ft_printf \
	$< -o $@

$(LIBFT):
	@make -sC libs/libft
	@make bonus -sC libs/libft

$(PRINTF):
	@make -sC libs/ft_printf

run: all
	@./push_swap
clean:
	@make fclean -sC libs/libft
	@make fclean -sC libs/ft_printf
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re