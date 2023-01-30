//Write a C program to read 4 inputs, say a,b,c and d, and display the sum of the remainders of a/b and c/d.

#include<stdio.h>
int main() {
    int a,b,c,d;
   
    scanf("%d",&a);
  
    scanf("%d",&b);
    
    scanf("%d",&c);
    
    scanf("%d",&d);
    
 
    printf("%d",a%b+c%d);
    
    return 0;
}
