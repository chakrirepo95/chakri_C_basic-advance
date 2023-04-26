# 5. How to write script, that will print, Message ""Hello World"", in Bold and Blink effect, and in different Colors like red, brown etc using echo command."


#!/bin/sh

#  ck='\033[0;31m'
 
ck='\e[1;5;36m'
echo -e "${ck}AKHIL.BUDAMPATI \033[0;31m "

ck='\e[1;5;32m'
echo -e "${ck}CHAKRAVARTHY.RVP \033[0;31m "

ck='\e[1;5;35m'
echo -e "${ck}sree kanth \033[0;31m "

ck='\e[1;5;33m'
echo -e "${ck}vinay pamulu \033[0;31m "

ck='\e[1;5;31m'
echo -e "${ck}sudhakar \033[0;31m "

ck='\e[1;5;34m'
echo -e "${ck}ashok \033[0;31m "

