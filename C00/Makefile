MAIN = main.c
EXEC = $(basename $(MAIN))
RM = rm -rf
NORMINETTE = norminette -R CheckForbiddenSourceHeader
CC = gcc -Wall -Wextra -Werror

all: compile run

compile:
	${CC} ${MAIN} $(FILE) -o ./${EXEC}

run:
	@echo "\nFile output is: \n"
	@./${EXEC}

clean:
	${RM}MAIN = main.c

.PHONY: all compile run norm