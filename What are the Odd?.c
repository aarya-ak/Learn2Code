//Write a C program to check whether an inputted number is even or odd. If it is even print it's square, if it is odd, print it's cube.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d\n",&a);
    if (a%2==0)
{        printf("Even\n");
        printf("%d\n",a*a);
 }
  else 
{       printf("Odd\n");
        printf("%d\n",a*a*a);
 }
   return 0;
}
