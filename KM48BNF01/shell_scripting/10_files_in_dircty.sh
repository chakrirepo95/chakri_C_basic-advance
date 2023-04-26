# 10. Write a shell script to list all of the directory files in a directory.

#!/bin/sh  

for dty in *
do
	if [ -d $dty ]
	then
		echo "$dty "
	fi
done







