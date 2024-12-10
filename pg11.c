#include<stdio.h>
void swapbyReferance(int *a,int *b)
{
    int c=*a;//c=20
    *a=*b;//a=20
    *b=c;//b=10
}
void swapbyvalue(int a,int b)
{
    int c = a;
    a = b;
    b = c;
}
int main()
{
    int x=10,y=20;
    //callbyreference
    printf("before the swap x=%d and y=%d\n",x,y);
    swapbyReferance(&x, &y);
    printf("after the swap x=%d and y=%d",x,y);
    //callbyvalue
    printf("before the swap x=%d and y=%d\n",x,y);
    swapbyvalue(x, y);
    printf("after the swap x=%d and y=%d",x,y);
    return 0;
}