//Write a C program to find the sum of the numbers as you enter them using the do while loop. Stop the program when the entered number is 0.//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=a+b;
    do {
        scanf("%d",&d);
        printf("%d\n",c);
        c=c+d;
        }
    while (d!=0);
  return 0;
}
