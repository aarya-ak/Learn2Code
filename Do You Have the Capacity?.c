//Write a C program to read 3 inputs - l,b and h . Now find the volume of cube, cuboid respectively using the formulaes given below.

//Cube - l*l*l
//Cuboid - l*b*h


#include<stdio.h>
int main() {
    float l;
    float b;
    float h;
    scanf("%f",&l);
    scanf("%f",&b);
    scanf("%f",&h);
    printf("%.3f",l*l*l);
    printf("\n%.3f",l*b*h);
    return 0;
}
