# 1. Write shell script that will add two nos, which are supplied as command line argument, and if this two nos are not given show error and its usage



#!/bin/sh

# hell0 world 

echo "HELLO WORLD"
# echo "enter two numbers"
# read a b
# echo -n "a+b = "; expr $a + $b

if [ $# -ne 2 ]
then 
	echo "enter only two arguments"
else
#	echo "$1"
#	echo "$2"

echo -n "$1+$2 = "; expr $1 + $2
fi







