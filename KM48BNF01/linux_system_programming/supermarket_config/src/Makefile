include ../.config



#ifdef CONFIG_1
 #       cc += -stock();
#endif
#ifdef CONFIG_2
#        cc += -sales();
#endif
#ifdef CONFIG_3
#	cc += -purchase();
#endif
#ifdef CONFIG_4
#	cc += -n=0;
#endif


main.o:
	
	gcc ${cc} -c main.c

clean: 
	rm *.o


	
