//Write a C program to find transpose of a matrix//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,M,i,j;
        scanf("%d",&N);
        scanf("%d",&M);
    int A[N][M];
    for(i=0;i<N;+i++)
    {
        for(j=0;j<M;j++)
            {
            scanf("%d",&A[i][j]);
            }
        }
    for(j=0;j<M;j++)
        {
        for(i=0;i<N;i++)
            {
            printf("%d ",A [i] [j]);
            }
        printf("\n");
        }
    
   
    return 0;
}
