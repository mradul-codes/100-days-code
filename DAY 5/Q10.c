// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main()
{   
    int t ;
    printf("time in sec:");
    scanf("%d",&t);
   
    if(t<0){
        printf("their is some error pls write value again");
    }
    else{
    int hour=t/3600;
    int a=t%3600;
    int min=a/60;
    int sec=min%60;

    printf("%dhours %dminutes %dseconds",hour,min,sec);
    }

    return 0;
}