
ck = gcc

all: main
	echo "good job chakravarthy"
main: main.o add.o sub.o ck.h
	${ck} main.o add.o sub.o ck.h -o main 
main.o: main.c
	gcc -c main.c
add.o: add.c
	${ck} -c add.c
sub.o: sub.c
	gcc -c sub.c
clean:
	rm *.o main
install:
	sudo cp main/bin
	
