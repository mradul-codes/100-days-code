// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main()
{
    float p,r,t;
    float si=0,ci=0;
    printf("give the essential data \n");
    printf("principal:");
    scanf("%f",&p);
    printf("rate:");
    scanf("%f",&r);
    printf("time:");
    scanf("%f",&t);

    si=(p*r*t)/100;
    printf("simple interest:%f\n",si);

    float a=pow((1+(r/100)),t);
    ci=p*a-p;
    printf("compound interest:%f",ci);

    return 0;
}