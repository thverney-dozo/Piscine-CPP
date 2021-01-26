NAME		= bin

SRC			= 	main.cpp \
				AMateria.cpp \
				Character.cpp\
				Cure.cpp\
				Ice.cpp\
				MateriaSource.cpp\

OBJ			= 	main.o \
				AMateria.o \
				Character.o\
				Cure.o\
				Ice.o\
				MateriaSource.o\
				


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
