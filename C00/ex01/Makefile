# Standard Makefile

NAME = PhoneBook

# Directories

INCLUDE				= include/
SRC_DIR				= src/
OBJ_DIR				= obj/

# Compiler and Flags

CXX					= c++
CXXFLAGS			= -Wall -Wextra -Werror -std=c++98 -I$(INCLUDE)
RM 					= rm -f

# Source files

SRC						= $(SRC_DIR)main.cpp \
						  $(SRC_DIR)PhoneBook.cpp \
						  $(SRC_DIR)Contact.cpp

# Apply pattern

OBJ						= $(patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.o,$(SRC))

# Build 

all:					$(NAME)

$(NAME):				$(OBJ)
						@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
						@echo "Phonebook compiled"

# Compile objects files from source files


$(OBJ_DIR)%.o:			$(SRC_DIR)%.cpp
						@mkdir -p $(OBJ_DIR)
						@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
						@$(RM) -r $(OBJ_DIR)

fclean:					clean
						@$(RM) $(NAME)

re:						fclean all

# Phony targets

.PHONY:					all clean fclean re