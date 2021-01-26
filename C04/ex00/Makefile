NAME		= bin

SRC			= 	main.cpp \
				Peon.cpp \
				Sorcerer.cpp \
				Victim.cpp \
				James.cpp \

OBJ			= 	main.o \
				Peon.o \
				Sorcerer.o \
				Victim.o \
				James.o \


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
