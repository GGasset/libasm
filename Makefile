
ASM_FILES=ft_strlen.s ft_strcmp.s
O_FILES=$(patsubst %.s,%.o,${ASM_FILES})

NAME=

test: main.c ${O_FILES} 
	gcc -g -o test main.c ${O_FILES}

clean:
	rm -f *.o

%.o: %.s
	nasm -f elf64 -g $? -o $@

.PHONY:
