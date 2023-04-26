# 5. How to write script, that will print, Message ""Hello World"", in Bold and Blink effect, and in different Colors like red, brown etc using echo command."


#!/bin/sh

#  sk='\033[0;31m'
 
ckecho  "AKHIL.BUDAMPATI"

ckecho  "CHAKRAVARTHY.RVP "

sk='\e[1;5;35m'
echo -e "${sk}sree kanth \033[0;31m "

sk='\e[1;5;33m'
echo -e "${sk}vinay pamulu \033[0;31m "

sk='\e[1;5;31m'
echo -e "${sk}sudhakar \033[0;31m "

sk='\e[1;5;34m'
echo -e "${sk}ashok \033[0;31m "


