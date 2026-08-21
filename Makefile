
ASM_FILES=ft_strlen.s
O_FILES=$(patsubst %.s,%.o,${ASM_FILES})

NAME=

test: ${O_FILES} ${main.c}
	gcc -g -o test main.c ${O_FILES}

%.o: %.s
	nasm -f elf64 -g $? -o $@
