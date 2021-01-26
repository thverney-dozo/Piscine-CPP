NAME=identify
FLAGS=-Werror -Wall -Wextra

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) *.cpp -o $(NAME)

clean:
	rm -f *.o
	rm -rf *.dSYM

fclean: clean
	rm -f $(NAME)

re: fclean all