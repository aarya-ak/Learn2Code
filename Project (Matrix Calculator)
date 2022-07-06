#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main(){
    int a[10][10],b[10][10],c[10][10],choice,d;
    printf("Elements in 1st matrix :\n");
    for(int i=0;i<3;i++)
    {
       
          scanf("%d %d %d",&a[i][0], &a[i][1], &a[i][2]);
    }
    
   
    printf("Elements in 2nd matrix :\n");
    for(int i=0;i<3;i++)
    {
       
        
            scanf("%d %d %d",&b[i][0], &b[i][1], &b[i][2]);
        
    }
    do {
    printf("\n1. Addition \n");
    printf("2. Substraction \n");
    printf("3. Multiplication \n");
    printf("4. Transpose \n");
    printf("5. Determinant \n");
    printf("6. Exit \n");
    printf("Enter your choice :\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("Sum of the matrix :\n");
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
    {
       c[i][j]=a[i][j]+b[i][j];
    printf(" %d ",c[i][j]);
    }
    printf("\n");
    }
    
    
    break;
    case 2:
    printf("Subtraction of the matrix :\n");
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
    {
       c[i][j]=a[i][j]-b[i][j];
    printf(" % d",c[i][j]);
    }
    printf("\n");
  }
 
    break;
    case 3:
    printf("Multiplication of the matrix :\n");
    for(int i=0;i<3;i++)  
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=0;
            for(int k=0;k<3;k++)
            {
            c[i][j]+=a[i][k]*b[k][j];
            }
            printf(" %d ",c[i][j]);
            
            
        }
       printf("\n");
    }
    
    break;
    case 4:
    printf("Transpose of 1st matrix :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        c[i][j]=a[j][i];
        printf(" %d ",c[j][i]);
        }
        printf("\n");
    }
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("Transpose of 2nd matrix :\n");
        c[i][j]=b[i][j];
        printf(" %d ",c[j][i]);
        }
        printf("\n");
    }printf("\n");
 
    break;
    case 5:
    printf("Determinant of the matrix :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        d=0;
       d= a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * ((a[1][0]
   * a[2][2]) - (a[2][0] * a[1][2])) + a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));
        }

    }
    printf(" %d ",d);
    printf("\n");
    
    break;
    case 6:
    printf("Choice not selected ");
    exit(0);
    default:
    printf(" Invalid choice");
    }
  }while(1);
  return 0;
}
