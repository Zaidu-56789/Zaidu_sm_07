#include<stdio.h>
int factorial(int);
int main()
{
    int number=0;
    printf("enter a number:");
    scanf("%d",&number);
    int fact = 0;
    fact=factorial(number);
    printf("factorial of a number %d is : %d",number,fact);
    return 0;
}
int factorial(int number)
{
    int fact =1;
    if(number!=1)
    {
        fact = number*factorial(number-1);
        return fact;
    }
    else
    {
        return 1;
    }
}