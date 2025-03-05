NAME = push_swap
CC = cc -g
MAKEFLAGS += --no-print-directory
CFLAGS = -fsanitize=undefined -g #-Wall -Wextra -Werror
LIBFT = libs/libft/libft.a
PRINTF = libs/ft_printf/libftprintf.a

SRCS = $(wildcard srcs/*.c)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) \
	$(LIBFT) \
	$(PRINTF) \
	-o $(NAME)
	@make clean 
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

update_libs:
	@git submodule update --init --recursive --remote

git_push: update_libs
	@git add .
	@read -p "Enter commit message: " message; \
	git commit -m "$$message"
	@git push

.PHONY: all clean fclean re update_libs git_push