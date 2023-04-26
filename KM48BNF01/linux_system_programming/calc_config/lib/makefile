all:libstatic.a libdynamic.so

libstatic.a:
	gcc -c add.c sub.c
	ar -rcs libcalc.a add.o sub.o

libdynamic.so:
	gcc -c -fpic add.c sub.c
	gcc -shared -o libcalc.so add.o sub.o 
	export LD_LIBRARY_PATH=.
clean:
	
	rm *.o 	
	rm libcalc.a libcalc.so


