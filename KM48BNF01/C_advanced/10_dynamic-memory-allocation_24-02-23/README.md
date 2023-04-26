 /* dynamic memory allocation */

1) Create a dynamic array of integers. Take input from user , sort the array and display the output.

2) Implement itoa function and return the string from the function. Print the result in main.
itoa function converts an integer into a string.
eg., input 123 , output : "123" (char pointer to "123")
declaration : char * itoa(int )

3) Write a function, that takes two strings as input and concatenates only the first n characters from first string and first m characters from second string and makes a new string.
eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
output : kerraaya

4)  Write a program to read  n number of strings from a user and print which string is the smallest of all ( in string comparison, smallest string means that should come the first in dictionary sorting order). Create the strings dynamically and read the data. 

 5)  read a set of numbers from the user, and convert each integer to string using itoa function that you have written above, and print the numeric string in calling function in the same loop.  

6)  "Write a trim() function,that will remove the leading and trailing spaces from a string.
eg., Input : ""    str  str   ""
Output : ""str str"""

7) Implement your own realloc function using malloc and free using below steps: 
- Allocate memory for new size using malloc
- copy data from old address to new address
- release the old address
- return the new address

8) Write a string concatenation function that calculates the source string length, accordingly adjusts the size of destination string before concatenating the strings, to avoid size issues. For this the destination must be allocated dynamically in calling function.

9)
read a set of words from the user and concatenate all of them to make a sentence and print it back using the concatenation function above with spaces as delimiters and fullstop as end of the sentence.

input: 
Kernel
Masters
is
India's
leading
training
institute.

output: Kernel Masters is India's leading training institute.

eg., input : kernel  e   xxx

output: kxxxrnxxxl"

10) Read a set of strings in a loop , create every string dynamically based on the given string's length (first read the string into an array, calculate its length and using that allocated memory dynamically, and copy the string from array to dyanmic memory). Sort the stringsin descending order and print.





