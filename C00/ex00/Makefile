# Megaphone Makefile

NAME = megaphone

# Directories

HDR			= 	include/
SRC_DIR		=	src/
OBJ_DIR		=	obj/

# Compiler

CXXFLAGS 	= -std=c++98 -Wall -Wextra -Werror
CXX 		= g++
RM			= rm -f

# Source Files
SRC			=	$(SRC_DIR)megaphone.cpp

# Object files

OBJ			= $(patsubst $(SRC_DIR)%.cpp,$(OBJ_DIR)%.o, $(SRC))

all: $(NAME)

$(NAME):	$(OBJ)
			@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
			@echo "Megaphone Compiled"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
			@mkdir -p $(@D)
			@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			@$(RM) -r $(OBJ_DIR)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

