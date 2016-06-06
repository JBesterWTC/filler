NAME = FILLER
SRC = main.c        \
	  libft/libft.a

FLAG = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft/ fclean && make -C libft/
	gcc $(FLAG) -o $(NAME) $(SRC) $(FLAG)

clean:
	make -C libft/clean
	rm -rf $(OBJ)

fclean: clean
	make -C libft/fclean
	rm -rf $(NAME)

re: fclean all
