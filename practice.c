


// this code is for finding leap year

#include<stdio.h>
int main()
{int y;
    printf("enter any year\n");
    scanf("%d",&y);
    if(y%4==0){
printf("yes you entered a year which  is leap year\n");
    }
    if(y%4!=0){
        printf("this year is not a leap year\n");
    }
    return 0;
}
