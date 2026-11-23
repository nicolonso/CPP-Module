# Makefile for attack

NAME 			=  Harl

# Directories

INCLUDE			= include/
SRC_DIR 		= src/
OBJ_DIR 		= obj/

# Flags

CXX 			= c++
CXXFLAGS 		= -Wall -Wextra -Werror -std=c++98 -I$(INCLUDE)
RM 				= rm -f

# Source files

SRC		=		$(SRC_DIR)main.cpp \
				$(SRC_DIR)Harl.cpp 
			
# Apply pattern

OBJ				= $(patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.o,$(SRC))


# Build

all:			$(NAME)

$(NAME):		$(OBJ)
				@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
				@echo "Harl compiled"

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp
				@mkdir -p $(OBJ_DIR)
				@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
				@$(RM) -r $(OBJ_DIR)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re