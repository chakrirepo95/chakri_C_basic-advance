include .config

ifdef CONFIG_STATIC_BUILD
	    cc = -static

endif

all: sk  ck
ck:
	gcc ${cc} src/main.o -o bin/ck -L lib -lcalc
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
	sudo cp lib/libcalc.a usr/lib
	sudo cp lib/libcalc.so usr/lib
	
