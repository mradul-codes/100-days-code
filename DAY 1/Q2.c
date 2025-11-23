// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    float num1,num2;
    float sum=0;
    float diff=0;
    float pro=0;
    float quo=0;

    printf("write two no. for print\n");

    printf("first no.:");
    scanf("%f",&num1);
    printf("second no.:");
    scanf("%f",&num2);

    sum=num1+num2;
    printf("the sum of two no. is:%f\n",sum);

    diff=num1-num2;
    printf("the difference of two no. is:%f\n",diff);

    pro=num1*num2;
    printf("the product of two no. is:%f\n",pro);

    quo= num1/num2;
   if(num2==0){
    printf("the no. doesn't exist");
   }
   else{
    printf("the quotient of no. is:%f",quo);
   }

   return 0;
}