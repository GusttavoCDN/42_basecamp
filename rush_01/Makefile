################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := rush01
CC        := gcc
FLAGS    := -Wall -Wextra -Werror

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      src/ft_strlen.c \
                    src/ft_atoi.c \
                    src/ft_board_resolution.c \
                    src/input_validations.c \
                    src/ft_result_board.c \
                    app/scrummaster.c \
                          
OBJS        := $(SRCS:.c=.o)
BIN_DIR    := bin

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

################################################################################
#                                  Makefile  objs                              #
################################################################################


CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

${NAME}:	${OBJS} ${BIN_DIR}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			${CC} ${FLAGS} -o ${BIN_DIR}/${NAME} ${OBJS}
			@echo "$(GREEN)$(NAME) created[0m ✔️"

${BIN_DIR}:
			mkdir -p ${BIN_DIR}

all:		${NAME}

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re


