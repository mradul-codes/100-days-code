// Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

int main()
{
    float r;
    float area=0;
    float cir =0;
    printf("give radius of a circle\n");

    printf("radius:");
    scanf("%f",&r);

    area = 3.14*r*r;
    cir = 2*3.14*r;

    printf("the area of circle is: %f\n",area);
    printf("the circumference of circle is: %f",cir);

    return 0;
}