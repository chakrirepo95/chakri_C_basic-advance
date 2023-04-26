# 8. Write a shell script that displays a list of all the files in the current directory to which the user has read, write and execute permissions.

#!/bin/sh  

for file in *
do
	if [ -f $file ]
	then
		if [ -r $file ] && [ -w $file ] && [ -x $file ]
#		if [ -r $file -a -w $file -a  -x $file ]
		then
			ls -l $file
		fi
	fi
done







