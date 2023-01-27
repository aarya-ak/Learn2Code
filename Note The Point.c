//Write a C program to add 2 numbers using pointers. (THE USAGE OF THE POINTER CONCEPT IS COMPULSORY)//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,*n,*m,sum;
    scanf("%d %d",&a,&b);
    
   
    n=&a;
    m=&b;
    sum=*n+*m;
    printf("Sum is %d",sum);
       

    
    return 0;
}
