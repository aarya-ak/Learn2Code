//Input a positive integer. Find the sum of product of consecutive integers between 0 and the input, say sum1. Also find the sum of sum of consecutive integrs between 0 and the input, say sum2. Write a C program to find and print sum1, sum 2 and sum1/sum2.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i=1,r1=0,r2=0,sum1=0,sum2=0,n;

    scanf("%d",&n);

    while(i<=n)

    {

        r1=i*(i-1);

        r2=i+(i-1);

        sum1+=r1;

        sum2+=r2;

        i++;

    }

    printf("%d\n",sum1);

    printf("%d\n",sum2);

    printf("%0.2f\n",(float)(sum1/sum2));
    return 0;
}
