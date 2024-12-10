#include<stdio.h>
void swapGuest(int *roomkey1,int *roomkey2)
{
    int temp=0;
    temp = *roomkey1;
    *roomkey1 = *roomkey2;
    *roomkey2 = temp;
}
int main()
{
    int guest1 = 0,guest2=0;
    printf("enter a number:");
    scanf("%d",&guest1);
    printf("Enter second number:");
    scanf("%d",&guest2);
    printf("before swapping of 2 guests:%d,%d",guest1,guest2);
    swapGuest(&guest1,&guest2);
    printf("\nafter swapping of 2 guests:%d,%d",guest1,guest2);
    return 0;
}
