NAME		= bin

SRC			= 	main.cpp \
				SuperTrap.cpp \
				FragTrap.cpp \
				ScavTrap.cpp \
				ClapTrap.cpp \
				NinjaTrap.cpp \

OBJ			= 	main.o \
				SuperTrap.o \
				FragTrap.o \
				ScavTrap.o \
				ClapTrap.o \
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
