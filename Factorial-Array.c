//Write a C program to find the factorial of all the integers in an array. Use function approach to calculate and print the factorial.//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact (int n);
int fact (int n)
    {
    if (n>0)
        return n*fact(n-1);
    else
        return 1;
    }
int main(){
    int i,N;
    scanf("%d\n",&N);
    int A[N];
  
        for(i=0;i<N;i++)
            {
        scanf("%d\n",&A[i]);
            
    
        
        
    printf("%d\n",fact(A[i]));
            }
    
    return 0;
    }
    
