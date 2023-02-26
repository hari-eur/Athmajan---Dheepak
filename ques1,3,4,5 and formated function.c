#include <stdio.h>
#include <stdlib.h>


/*1.What were the major factors that led to the development of the C programming language?
C is a middle level language devloped by Dennis Richie at Bell Laboratory
it is a succesor of B language
It became the basis of UNIX operating system
unlike B ,'c' has various data type that makes it perfectly suitable for various application

3 Illustrate a single C program which brings out the difference between formatted and unformatted function
Formatted I/O functions are used to take various inputs from the user and display outputs to the user.
example
printf();
scanf();
here we can use format specifiers

Unformatted I/O
Unformatted I/O functions are used only for character data type or character array/string
example
gets();
puts();
etc
here we cannot use format specifiers


4.What is the difference between single quotes and double quotes in C programming?
single quotes in c program is used for a single charater
while double quotes in c program is used for a group of charaters or string
example
char a ='d';  charater
char a ="embedUR";  string

5.Why order of evaluation of expressions is it important to understand
Expression evaluation is nothing but operator precedence and associativity. Expression precedence in C tells you which operator is performed first
it is similar to BODMAS in maths

*/
//formated and unformated functions

int main()
{
    //formated function
    int num1;


    printf("Enter a integer number: ");

    scanf("%d", &num1);

    printf("You have entered %d\n", num1);



    return 0;
}
