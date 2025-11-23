//  Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main()
{
    int a=1;
    int b=6;
    int c;

    c=a;
    a=b;
    b=c;

    printf("a= %d,b= %d",a,b);
    return 0;
}