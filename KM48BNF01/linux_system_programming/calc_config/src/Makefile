include ../.config

ifdef CONFIG_ADD

      cc += -DADD  
endif
      
ifdef CONFIG_SUB
      cc += -DSUB
endif

main.o:
	gcc ${cc} -c main.c 
clean:
	rm *.o


