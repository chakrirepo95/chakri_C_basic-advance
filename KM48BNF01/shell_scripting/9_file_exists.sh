# 9. Write a shell script that receives any number of file names as arguments checks if every argument supplied is a file or a directory and reports accordingly. Whenever the argument is a file, the number of lines on it is also reported.

#!/bin/sh  


for  ck in $* 
do
	if [ -f $ck  ]
	then 
		echo "$ck"
	        cat $ck | wc -lcw 
	elif [ -d $ck ]
	then
		
		echo "$ck"
		echo "it is a directory "
	else 
		
		echo "$ck"
		echo "No such a file (or) directory "
	fi 
done	






