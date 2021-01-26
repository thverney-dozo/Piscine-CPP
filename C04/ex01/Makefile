NAME		= bin

SRC			= 	main.cpp \
				AWeapon.cpp\
				Character.cpp\
				Enemy.cpp\
				PlasmaRifle.cpp\
				PowerFist.cpp\
				RadScorpion.cpp\
				SuperMutant.cpp\
				ElectroRifle.cpp\
				MagmaSpider.cpp\

OBJ			= 	main.o \
				AWeapon.o\
				Character.o\
				Enemy.o\
				PlasmaRifle.o\
				PowerFist.o\
				RadScorpion.o\
				SuperMutant.o\
				ElectroRifle.o\
				MagmaSpider.o\
				


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
