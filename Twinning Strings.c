//Write a C program to input 2 strings and check whether they are equal or not.//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str1[50],str2[50];
    int a;
    scanf("%[^\n]%*c",str1);
    scanf("%[^\n]%*c",str2);
    a=strcmp(str1,str2);
    if(a==0)
        printf("The strings are equal. ");
        else
            printf("The strings aren't equal. ");
    

    
    return 0;
}
