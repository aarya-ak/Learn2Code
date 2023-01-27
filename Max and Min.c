//Write a C program to find the maximum and minimum element of the array.//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int max,min,i,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
         }
    }
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];     
       }
        
    }
    printf("%d\n",max);
    printf("%d",min);
    return 0;
}
