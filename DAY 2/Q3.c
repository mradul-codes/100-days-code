// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include<stdio.h>

int main()
{
    float l,b;
    float area=0;
    float perimeter =0;
    printf("give length and breadth of a rectangle\n");

    printf("length:");
    scanf("%f",&l);
    printf("breadth:");
    scanf("%f",&b);

    area = l*b;
    perimeter = 2*(l+b);

    printf("the area of rectngle is: %f\n",area);
    printf("the perimeter of rectangle is: %f",perimeter);

    return 0;
}