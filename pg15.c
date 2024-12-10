#include<stdio.h>
int countdigit(int);
int main()
{
    int number=0;
    printf("enter a number:");
    scanf("%d",&number);
    int sum = 0;
    sum=countdigit(number);
    printf("factorial of a number %d is : %d",number,sum);
    return 0;
}
int countdigit(int number)
{
    static int count = 0;
    if(number!=0)
    {
        count++;
        countdigit(number/10);
    }
    else
    {
        return count;
    }
}