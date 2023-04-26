obj-m := dynamic-cdd.o

all:
	make -C /lib/modules/`uname -r`/build M=`pwd` modules
	gcc App.c -o app
clean:
	make -C /lib/modules/`uname -r`/build M=`pwd` modules clean
	rm -rf app
install:
	make -C /lib/modules/`uname -r`/build M=`pwd` modules_install
