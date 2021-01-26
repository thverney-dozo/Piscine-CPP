NAME		= bin

SRC			= 	main.cpp \
				AssaultTerminator.cpp\
				Squad.cpp\
				TacticalMarine.cpp\

OBJ			= 	main.o \
				AssaultTerminator.o\
				Squad.o\
				TacticalMarine.o\
				


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
