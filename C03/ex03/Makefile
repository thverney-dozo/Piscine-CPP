NAME		= bin

SRC			= 	main.cpp \
				ClapTrap.cpp \
				FragTrap.cpp \
				ScavTrap.cpp \
				NinjaTrap.cpp \

OBJ			= 	main.o \
				ClapTrap.o \
				FragTrap.o \
				ScavTrap.o \
				NinjaTrap.o \

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
