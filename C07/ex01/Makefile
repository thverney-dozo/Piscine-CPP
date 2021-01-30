NAME=iter
FLAGS=-Werror -Wall -Wextra -std=c++98

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) *.cpp -o $(NAME)

clean:
	rm -f *.o
	rm -rf *.dSYM

fclean: clean
	rm -f $(NAME)

re: fclean all