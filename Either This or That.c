/*Input an integer which is the limit, say n. Write a C program to print all the numbers till the limit n that are divisible by either 2 and 3 or divisible by all 2,3 and 5.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i=0;
    scanf("%d",&a);
    for (i=0;i<=a;i++)
    if (i%2==0 && i%3==0)
        printf("%d\n",i);
    else if (i%2==0 && i%3==0 && i%5==0)
        printf("%d\n",i);
    return 0;
}
