# Standard Makefile

NAME = phonebook

# Directories

INCLUDE				= include/
SRC_DIR				= src/
OBJ_DIR				= obj/

# Compiler and Flags

CC					= c++
CFLAGS				= -Wall -Wextra -Werror -std=c++98
RM 					= rm -f

# Source files

SRC_PHONE				= $(SRC_DIR)main.cpp \
						  $(SRC_DIR)phonebook.cpp \
						  $(SRC_DIR)contact.cpp \ 
						  $(SRC_DIR)parse.cpp

# Concatenate all

SRC						= $(SRC_PHONE)

# Apply pattern

OBJ						= $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o,$(SRC))

# Build 

all:					$(NAME)

$(NAME):				@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
						@echo "Phonebook compiled"

# Compile objects files from source files


$(OBJ_DIR)%.o:			$(SRC_DIR)%.cpp
						@$(CC) $(CFLAGS) -c $< -o $@

clean:
						@$(RM) -r $(OBJ_DIR)

fclean:					clean
						@$(RM) $(NAME)

re:						fclean all

# Phony targets

.PHONY:					start all clean fclean re
