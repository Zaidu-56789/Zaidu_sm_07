#include<stdio.h>
int reverse(int);
intmain()
{
    int number=0;
    printf("enter a number:");
    scanf("%d",&number);
    int rev=reverse(number);
    {
        printf("palindrome number");
    }
    printf("reverse of%D is =%d",number,rev);
    return 0;
}