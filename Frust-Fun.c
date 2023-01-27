//Program to find volume of a frustom of a cone!!! Implement a user-defined function VolFrust(), along with its parameters small base Radius,large base radius & height. The VolFrust() should return the volume of frustom to a variable in main() and display it. Use math.h functions.Use π = 3.1415926535898//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float volfrust(int R,int r,int h);
float volfrust(int R,int r,int h)
    {
    float v;
    float pi=3.1415926535898;
    v=(pi*h*(r*r+R*R+R*r))/3;
    return v;
    }   

int main() {
    int a,b,c;
    float vol;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    vol=volfrust(a,b,c);
    printf("%0.2f",vol);
    return 0;
}
