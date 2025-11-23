// Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>

int main()
{
    int sum=0;
    int n;
    int a=1;

    printf("write the number where the sum you want:");
    scanf("%d",&n);

    sum=(n*(a+n))/2;
    printf("the sum of %d numbers is :%d",n,sum);

    return 0;
}