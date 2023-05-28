BASE_FOLDER = ./ex00

PROGRAM = rush00

SRCS = ${BASE_FOLDER}/*.c

EXEC = ./${PROGRAM}

RM = rm -rf

NORMINETTE = norminette -R CheckForbiddenSourceHeader

all: compile run

compile:
	cc ${SRCS} -o ${PROGRAM}

run:
	@echo "\nProgram output is: \n"
	@${EXEC}

clean:
	${RM}MAIN = main.c

norm:
	${NORMINETTE}

.PHONY: all compile run norm