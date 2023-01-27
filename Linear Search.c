//Write a C program to enter an array and search for the position of a particular element in that array If an element is present multiple times, location of the first occurence should be printed. IF the element is not present, "Element not presen" should be presented//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100],i,size,key,flag=0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&size);
    
    printf("Enter the array elements: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: \n");
    
    scanf("%d",&key);
    for (i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
     }
    printf("Location is :\n");
    if(flag==1)
        printf("%d",i+1);
    return 0;
}
