//Get an input from the user. If the number is an even number, square the number, add 2 and repeat the process twice. If the number is odd, take the square of the number, add 3 and repeat the process thrice. Print the result.//

#include <stdio.h>
int main() 
{
   int a,i;
   scanf("%d",&a);
   if(a%2==0) 
  {
     for(i=0;i<2;i++)
     {
        a=(a*a) +2;
     }
     printf("%d",a);
  }
  else
  {
     for(i=0;i<3;i++)
     {
        a=(a*a) +3;
     }
     printf("%d",a);
  }
  return 0;
}
   
