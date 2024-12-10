#include<stdio.h>
int sumofrange(int);
int main()
{
    int number=0;
    printf("enter a number:");
    scanf("%d",&number);
    int sum = sumofrange(number);
    printf("sum of %d is : %d",number,sum);
    return 0;
}
int sumofrange(int number)
{
    int res;
    
    if (number == 1)
    {
        return 1;
    }
    else
    {
        res =  number + sumofrange(number - 1);
    }
    return res;
}