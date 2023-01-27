//Write a program in C to sort an array in Bubble sort//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100],n,i,j,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                    {
                        flag=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=flag;
                    }
            }
        }
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
    return 0;
}
