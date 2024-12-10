#include<stdio.h>
int sum(int,int);//function declaration
void main()
{
    int a=0;
    int b=0;
    int total=0;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    total=sum(a,b);
    printf("sum is:%d",total);
    return 0;
}
int sum(int a,int b)
{
    int s=0;
    s=a+b;
    return s;
}