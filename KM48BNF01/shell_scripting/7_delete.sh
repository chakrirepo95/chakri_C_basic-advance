# 7. Write a shell script that deletes all lines containing a specified word in one or more files supplied as arguments to it.

#!/bin/sh  

echo " enter a word with a file name "

sed -e "/$1/d" $2


# cat $2 | grep -v $1 









