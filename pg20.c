#include<stdio.h>
int maxnumber(int*p,int*q)
{
    if(*p > *q)
    {
        return *p;
    }
    else{
        return *q;
    }
}
int main()
{
    int x = 0,y = 0;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Enter a second number:");
    scanf("%d",&y);
    printf("max number is :%d",maxnumber(&x,&y));
    return 0;
}