//Write a C program to receive a string as the first input and a character as the second input and find the frequency of the inputted character in the string.//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,count=0,n;
    char arr[100],ch;
    
    gets(arr);
    n=strlen(arr);
    scanf("%c",&ch);
     
      
        
        
    
         
    for(i=0;i<n;i++)
        {
        if (arr[i]==ch)
            {
            count++;
          
            
            }
        }
   
     
           if (count!=0)
               {
            printf("%d",count);
               }
    else 
        {
            printf("Element not present.");
        }
        
    return 0;
}
