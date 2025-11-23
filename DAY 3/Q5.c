// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main()
{
    float cel;
    float fah=0;
    printf("write how much celsius convert into fahrenheit\n");
    printf("celsius:");
    scanf("%f",&cel);

    fah= ((9*cel)/5)+32;

    printf("convert temperature from %f Celsius to %f Fahrenheit.",cel,fah);
    return 0;
}