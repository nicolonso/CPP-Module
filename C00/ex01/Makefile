# Standard Makefile

NAME = phonebook

# Directories

INCLUDE				= include/
SRC_DIR				= src/
OBJ_DIR				= obj/

# Compiler and Flags

CC					= c++
CFLAGS				= -Wall -Wextra -Werror -std=c++98 -I$(INCLUDE)
RM 					= rm -f

# Source files

SRC						= $(SRC_DIR)main.cpp \
						  $(SRC_DIR)phonebook.cpp \
						  $(SRC_DIR)contact.cpp \
						  $(SRC_DIR)parse.cpp

# Apply pattern

OBJ						= $(patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.o,$(SRC))

# Build 

all:					$(NAME)

$(NAME):				$(OBJ)
						@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
						@echo "Phonebook compiled"

# Compile objects files from source files


$(OBJ_DIR)%.o:			$(SRC_DIR)%.cpp
						@mkdir -p $(OBJ_DIR)
						@$(CC) $(CFLAGS) -c $< -o $@

clean:
						@$(RM) -r $(OBJ_DIR)

fclean:					clean
						@$(RM) $(NAME)

re:						fclean all

# Phony targets

.PHONY:					start all clean fclean re
