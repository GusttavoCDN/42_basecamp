NAME = libft.a

SRC_FOLDER = ./srcs
SRC_FILES = ft_putchar.c ft_putstr.c \
			ft_strcmp.c ft_strlen.c ft_swap.c

#  addprefix function => It will add the prefix to all files after the ","
SRC = $(addprefix $(SRC_FOLDER)/, $(SRC_FILES))

OBJ_FILES = $(addprefix $(SRC_FOLDER)/, $(SRC_FILES:.c=.o))

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJ_FILES}
	ar rcs ${NAME} ${OBJ_FILES}
	
# Tell make how to transform a .c file into a object file with
# This is not the right way because forces a full recompilling
# .c.o:
# 	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

#  $@ => Is the current target of the rule
#  $< => Is the first dependecy of the rule
${SRC_FOLDER}/%.o: ${SRC_FOLDER}/%.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	${RM} ${NAME}

clean:
	${RM} ${OBJ_FILES}

re: fclean all

.PHONY: clean all fclean re