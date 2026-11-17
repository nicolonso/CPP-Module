# Makefile

NAME = ZOMBIE

# Directories

INCLUDE = Include/
SRC_DIR = src/
OBJ_DIR = obj/

# Compiler and flags

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INCLUDE)
RM			= rm -fclean

# Source files

SRC					= 	$(SRC_DIR)main.cpp \
						$(SRC_DIR)newZombie.cpp \
						$(SRC_DIR)randomChump.cpp \
						$$(SRC_DIR)Zombie.cpp

# Pattern

OBJ					=	$(patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.o,$(SRC))

# Build

all:				$(NAME)

$(NAME):			$(OBJ)
					@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
					@echo "Zombie compiled"

$(OBJ_DIR)%.o:		$(SRC_DIR)%.cpp
					@mkdir -p $(OBJ_DIR)
					@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:				
					@$(RM) -r $(OBJ_DIR)

fclean:				clean
					@$(RM) $(NAME)

re:					fclean all

# Phony

.PHONY:				all clean fclean re