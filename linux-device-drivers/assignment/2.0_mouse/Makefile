obj-m += mouse_hdd.o
obj-m += mouse_ldd.o

all:
	make -C /lib/modules/`uname -r`/build M=$(shell pwd) modules
	#make -C /usr/src/linux M=$(shell pwd) modules
clean:
	#make -C /usr/src/linux M=$(shell pwd) clean
	make -C /lib/modules/`uname -r`/build M=$(shell pwd) clean



#obj-m	:= startstop.o
#startstop-objs := start.o stop.o

