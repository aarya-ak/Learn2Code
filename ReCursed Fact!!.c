#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int fact (int N);
    int perfectnum(int N);
    int fact (int N)
        {
        if(N>0)
            {
            return N*fact(N-1);
            }
        else
            {
            return 1;
            }
        }


    int perfectnum(int N)
        {
        int a;
        a=sqrt(N);
        return a;
        }
    int main(){{
        int n,m;
        scanf("%d",&n);
        printf("%d",fact(n));
        m=perfectnum(n);
        if(m*m==n)
            {
            printf("\nPerfect Square");
            }
            else 
                {
                printf("\nNot Perfect Square");
                }
            }
            

 
    return 0;
}
