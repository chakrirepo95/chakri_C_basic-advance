 include .config

 ifdef CONFIG_STATIC_BUILD
	    cc = -static

 endif

all: sk  ck
	echo "CHAKRAVARTHY DONE"
ck:
	gcc ${cc} src/main.o -o bin/ck -L lib -lsuper
sk:
	make -C src

library:	
	make -C lib
clean:
	 
	make -C lib clean 
	make -C src clean
	rm bin/ck
	
install:
	sudo cp bin/ck /usr/bin
	sudo cp lib/libsuper.a usr/lib
	sudo cp lib/libsuper.so usr/lib
	
