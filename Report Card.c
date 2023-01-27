#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int mark=0,total,i,p;
    for(i=0;i<5;i++)
    {
          scanf("%d",&total);
    
          scanf("%d",&mark);
          p=(mark*100)/total;
          if(p>=90)
             printf("S\n");
          else if(p>=85)
             printf("A+\n");
         else if(p>=80)
             printf("A\n");
         else if(p>=75)
            printf("B+\n");
        else if(p>=70)
            printf("B\n");
       else if(p>=65)
           printf("C+\n");
       else if(p>=60)
           printf("C\n");
       else if(p>=55) 
           printf("D\n");
        else if(p>=40)
            printf("P\n");
        else if(p<40)
            printf("F\n");
    
     }
       return 0;
}
