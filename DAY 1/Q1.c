// Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int main()
{
    float num1,num2;
    float sum=0;
    printf("write two no. for print\n");

    printf("first no.:");
    scanf("%f",&num1);
    printf("second no.:");
    scanf("%f",&num2);

    sum=num1+num2;
    printf("the sum of two no. is:%f",sum);

    return 0;
}
