//Write a C program to find the sum of the digits of a given number using while loop.//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,result=0;
    scanf("%d",&n);
    while(n!=0)
    {
        result+=n%10;
        n=n/10;
    }
    printf("%d\n",result);    
    return 0;
}
