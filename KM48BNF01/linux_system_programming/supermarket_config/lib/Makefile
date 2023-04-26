all:libstatic.a libdynamic.so

libstatic.a:
	gcc -c op.c super.c
	ar -rcs libsuper.a op.o super.o

libdynamic.so:
	gcc -c -fpic op.c super.c
	gcc -shared -o libsuper.so op.o super.o 
	export LD_LIBRARY_PATH=.
clean:
	
	rm *.o 	
	rm libsuper.a libsuper.so


