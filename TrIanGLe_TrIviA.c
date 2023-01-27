//Write a c program to input the three sides of a triangle and to check whether the triangle is Equilateral, Isosceles or Scalene.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    if (a==b)
{   if (b==c)
        printf("Equilateral Triangle");
     else 
         printf("Isosceles Triangle");
}
    else 
{        if (b==c)
    printf("Isosceles Triangle");
    else 
        printf("Scalene Triangle");
}
  
  return 0;
}
