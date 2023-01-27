#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float rectangle(int a,int b);
float square(int a);
float triangle(int a, int b, int c);
float rectangle(int a,int b)
    {
    return a*b;
    }
float square(int a)
    {
    a=(float)a;
    return a*a;
        
    }
float triangle(int a, int b, int c)
    {
    float n,m;
    n=(a+b+c)/2;
    m=sqrt(n*(n-a)*(n-b)*(n-c));
    return m;
    }
      

int main() {
    int N;
    char ch;
    scanf("%d\n",&N);
    if(N==3)
        {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        printf("%0.1f",triangle(x,y,z));
        }
    if(N==4)
        {
        scanf("%c",&ch);
        if(ch=='S')
            {
            int x;
            scanf("%d",&x);
            printf("%0.1f",square(x));
            }
        if(ch=='R')
            {
            int x,y;
            scanf("%d %d",&x,&y);
            printf("%0.1f",rectangle(x,y));
            }
        }
               
           

   
    return 0;
}
