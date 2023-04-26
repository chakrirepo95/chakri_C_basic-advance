
cc = gcc

all:ck
	echo "good job chakravarthy"
ck:main.o add/add.o sub/sub.o
	${cc} main.o add/add.o sub/sub.o -o ck
main.o: main.c
	gcc -c main.c
add/add.o: add/add.c
	make -C add
sub/sub.o: sub/sub.c
	make -C sub
clean:
	rm *.o ck add/*.o sub/*.o
install:
	sudo cp ck/bin
	
