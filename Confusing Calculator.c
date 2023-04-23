/*Shweta wants to prank her friends using a 'confusing calculator'. After inputting two numbers, When the user gives an input which is an operator'#' it should perform addition Addition,'@' for Subtraction, '&' for Multiplication, and '%' for Division.
When the case of Division is chosen, swap Dividend and Divisor during the division, and while Subtraction swap the first number with second number.
When divisor is 0, print "Not Defined" and exit from the program.
If any other character other than the specified operands are inputted, program should print "Error 5 : Input Error".
Using switch statements, write a C program to create such a calculator.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a,b;
    char operation;
    scanf("%f",&a);
    scanf("\n%f",&b);
    scanf("\n%c",& operation);
    switch (operation)
        {
            case '#':
            printf("%.1f\n",a+b);
            break;
            case '@':
            printf("%.1f\n",b-a);
            break;
            case '&':
            printf("%0.1f\n",a*b);
            break;
            case '%':
            if (a==0)
                printf("Not Defined");
                       else
                       printf("%.1f\n",b/a);
                       break;
            default:
            printf("Error 5: Input Error");
         }
    return 0;
}
