NAME		= phonebook

SRC			= 	main.cpp 	 	\
				Info.cpp 		\

OBJ			= 	main.o 		\
				Info.o		\

CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

%.o:%.c
	$(CXX) $(CXXFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all