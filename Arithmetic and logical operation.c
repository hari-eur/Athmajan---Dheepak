#include <stdio.h>
#include <stdlib.h>

/*Arithmetic operators are used to perform mathematical operations such as additon ,sub ,multi, Div, modulus
'+'= performs addition of two operands
'-'= performs subtraction of two operands
'*'= performs multiplication of two operands
'/'= performs division of two operands it outputs only quotient
'%'= performs division of two operands it outputs only the reminder

Logical operators are used to perform logical operation between two operands such as AND OR not
'&&'= Logical AND ,here it outputs true or 1 only when both the operands are true
'||'= Logical OR ,here it outputs true if any one operand is true
'!' = Logical NOT, logical not outputs inverse of the operand if the operand is true the output is false vice-versa
*/

int main()
{
   int a =5;
   int b =5;
   int c;

   c =a+b;
   printf("addition of a+b= %d\n",c);

   c=a-b;
   printf("sub of a-b= %d\n",c);

   c=a*b;
   printf("mul of a*b= %d\n",c);

   c=a/b;
   printf("div of a/b= %d\n",c);

   c=a%b;
   printf("mod of a%b= %d\n",c);


   //logical operation

    a = 7, b = 7, c = 10;
    int d;

    d = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", d);

    d = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", d);

    d = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", d);

    d = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", d);

    d = !(a != b);
    printf("!(a != b) is %d \n", d);

    d = !(a == b);
    printf("!(a == b) is %d \n", d);

    return 0;
}
