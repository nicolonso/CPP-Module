# Megaphone Makefile

NAME = megaphone

# Compiler

CXXFLAGS 	= -std=c++98 -Wall -Wextra -Werror
CXX 		= c++
RM			= rm -f

# Source Files
SRC			=	megaphone.cpp

# Object files

OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBJ)
			@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
			@echo "Megaphone Compiled"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
			@mkdir -p $(@D)
			@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			@$(RM) -r $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

