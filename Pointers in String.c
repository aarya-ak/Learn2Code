#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    char *n;
    
    fgets(str,100,stdin);
    n=&str;
    while(*n!='\0')
        {
    printf("%c",*n++);
        }

    
    return 0;
}
