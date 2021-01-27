NAME		= bin

SRC			= 	main.cpp 					\
				Bureaucrat.cpp 				\
				Form.cpp					\
				PresidentialPardonForm.cpp	\
				RobotomyRequestForm.cpp		\
				ShrubberyCreationForm.cpp	\
				Intern.cpp					\

OBJ			= 	main.o						\
				Bureaucrat.o				\
				Form.o						\
				PresidentialPardonForm.o	\
				RobotomyRequestForm.o		\
				ShrubberyCreationForm.o		\
				Intern.o					\

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
