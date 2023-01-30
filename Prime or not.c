//Write a C program to get a number from the user and check whether the number divided by 2 is prime or not ?

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,flag=1;

    scanf("%d",&n);

    m=n/2;

    for (int i=2;i<=m/2;i++)

        {

        if (m%i==0)
         {
           flag=0;
            break;
          }
        }
       if(flag==1)
             printf("Number is prime");
        else
        {
            printf("Number is not prime");
        }
        return 0;

    }

   
   

