//Sruti runs a restaurant in Kerala. A customer comes into restaurant and she presents the food menu. Food Menu includes :
//Tea/Coffee = Rs 15
//Idli = Rs 5
//Parota = Rs 10
//Burger = Rs 80
//Chicken Curry = Rs 125
//Veg Kuruma = Rs 100
//Coke = Rs 60
//As a Summer offer and to gain some attention from customers she decided to give a 5% discount on Burgers and Chicken curry.
//Using C programming, help her create a bill by entering the items the customer ordered. The bill should display the total cost of food, and the final amount. The final bill must also include a 2% tax of the total cost.//



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,i;
    float s=0,f=0;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
        {
        scanf("%d",&b);
        switch(b)
            {
                case 1:
                     s=s+15;
                break;
                case 2:
                      s=s+5;
                break;
                case 3:
                     s=s+10;
                break;
                case 4:
                     s=s+76;
                break;
                case 5:
                    s=s+118.75;
                break;
                case 6:
                    s=s+100;
                break;
                case 7:
                     s=s+60;
                break;
                }
        }
    f=s+(s*0.02);
    printf("%.3f",s);
    printf("\n%.3f",f);
    return 0;
 }
