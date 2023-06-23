#------------------------------------------------------------------------------#
#                                VARIABLES                                     #
#------------------------------------------------------------------------------#

# Compiler and flags
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra -g
RM		=	rm -rf

# Output file name
NAME	=	rush01

BIN_FOLDER = bin

# Sources are all .c files
SRC_FOLDER = src
SRC_FILES = ft_atoi.c ft_strlen.c input_validations.c \
	ft_board_resolution.c ft_result_board.c
SRC = $(addprefix $(SRC_FOLDER)/, $(SRC_FILES))

# Objects are all .o files
OBJ_FOLDER = obj
APP_FOLDER = app
OBJS = $(addprefix $(OBJ_FOLDER)/, $(SRC_FILES:.c=.o))

# Includes are all .h files
INCLUDES_FOLDER = includes
INCLUDE_FILES = rush01.h
INCLUDES = $(addprefix $(INCLUDES_FOLDER)/, $(INCLUDE_FILES)) 

#------------------------------------------------------------------------------#
#                                 TARGETS                                      #
#------------------------------------------------------------------------------#

all: $(NAME)

# Generates output file
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) ${APP_FOLDER}/scrummaster.c ${OBJS} -o $(BIN_FOLDER)/$(NAME)

# Compiles sources into objects
$(OBJ_FOLDER)/%.o: $(SRC_FOLDER)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Removes objects
clean:
	$(RM) $(OBJS)

# Removes objects and executables
fclean: clean
	$(RM) $(BIN_FOLDER)/$(NAME)

re: fclean all clean

# Removes objects and executables and remakes
.PHONY: fclean all re clean