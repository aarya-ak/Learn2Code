//Write a C program to enter n number of integers into an array and print them in reverse order//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
    {
    int N,arr[10],i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of elements in the array : \n");
    for(i=N-1;i>=0;i--)
    {
        
        printf("%d\n",arr[i]);
    }
    return 0;
}
