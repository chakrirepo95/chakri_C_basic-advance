# 11. Write a shell script to find factorial of a given integer.


#!/bin/sh  

echo "enter a number" 
read a 
c=$a

while [ $c -ne 1 ]
do
	c=$(($c - 1))
	a=$(($c * $a))
done
echo "$a"







