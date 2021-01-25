NAME		= bin

SRC			= 	main.cpp \
				FragTrap.cpp \
				ScavTrap.cpp \

OBJ			= 	main.o \
				FragTrap.o \
				ScavTrap.o

CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

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
