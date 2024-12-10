#include <stdio.h>
void  banktransfer(int *accountbalance1,int *accountbalance2 ,int amt)
{
    *accountbalance1=(*accountbalance1) - amt;
    *accountbalance2=(*accountbalance2) + amt;
}
int main()
{
    int balance1 = 0,balance2 = 0,amount=0;
    printf("enter account number for user 1:");
    scanf("%d",&balance1);
     printf("enter account number for user 2:");
    scanf("%d",&balance2);
     printf("enter amount to transfer:");
    scanf("%d",&amount);
    printf("before transaction between 2 accounts:%d,%d",balance1,balance2);
    banktransfer(&balance1, &balance2, amount);
    printf("\nafter transaction between 2 account:%d,%d",balance1,balance2);
    return 0;
}