//Write a C program to find ROOT MEAN SQUARE of three numbers using sqrt() function. (First, find squares of respective numbers, take their mean and find its square root which gives rms value )

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a;
    float b;
    float c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("%.2f",sqrt((a*a+b*b+c*c)/3));
    return 0;
}
