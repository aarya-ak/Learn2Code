//Write a C program to create a simple calculator, that takes in 2 inputs and displays the sum, the difference, the product and the quotient.

#include<stdio.h>
int main() {
    int a,b;
  
    scanf("%d", &a);
   
    scanf("\n%d", &b);
   
  
    printf("%d",a+b);
    
    printf("\n%d",a-b);
    
    printf("\n%d",a*b);
 
    printf("\n%.2f",(float)a/b);
    return 0;
}
