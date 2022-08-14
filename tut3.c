#include<stdio.h>



int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    //float sum=0;
    // addition of two numbers 
     printf("enter your numbers \t\n");
     scanf("%d%d",&num1,&num2);
     //sum=num1%num2;
     //printf("result is %f\n",sum);
     printf("%d",!(num1>0&&num1<num2));
    return 0;
}
