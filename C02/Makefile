MAIN = main.c
EXEC = $(basename $(MAIN))
RM = rm -rf
NORMINETTE = norminette -R CheckForbiddenSourceHeader

all: compile run

compile:
	cc ${MAIN} $(FILE) -o ./${EXEC}

run:
	@echo "\nFile output is: \n"
	@./${EXEC}

clean:
	${RM}MAIN = main.c
EXEC = $(basename $(MAIN))
RM = rm -rf
NORMINETTE = norminette -R CheckForbiddenSourceHeader

all: compile run

compile:
	cc ${MAIN} $(FILE) -o ./${EXEC}

run:
	@echo "\nFile output is: \n"
	@./${EXEC}

clean:
	${RM}

norm:
	${NORMINETTE}

.PHONY: all compile run norm

norm:
	${NORMINETTE}

.PHONY: all compile run norm