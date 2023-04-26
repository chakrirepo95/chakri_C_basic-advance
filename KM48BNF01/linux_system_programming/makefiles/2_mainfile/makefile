ck = gcc

all: main

main:main.o
	gcc main.o -o main 
main.o:main.c
	${ck} -c main.c
clean:
	rm *.o main
install:
	sudo cp main/bin

