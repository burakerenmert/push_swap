CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = push_swap.c check.c functions.c
OBJ = $(SRC:.c=.o)

NAME = push_swap

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)   # Compiles Libft first

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)  # Link libft.a

clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT_DIR)   # Clean Libft objects

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)  # Remove Libft library

re: fclean all
