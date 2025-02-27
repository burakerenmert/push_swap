CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a
PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

SRC = push_swap.c check.c swap_functions.c push_functions.c rotate_functions.c reverse_rotate_functions.c get_index.c radix.c
OBJ = $(SRC:.c=.o)

NAME = push_swap

all: $(LIBFT) $(PRINTF) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)  # Link both libft.a and libftprintf.a

clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT_DIR)   # Clean Libft objects
	make clean -C $(PRINTF_DIR)  # Clean ft_printf objects

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)  # Remove Libft library
	make fclean -C $(PRINTF_DIR) # Remove ft_printf library

re: fclean all

