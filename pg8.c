#include<stdio.h>
int sum(int,int);//function declaration
int sub(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);
int main()
{
    int a=0;
    int b=0;
    int total=0;
    int number=0;
    printf("please select an operation to perform");
    printf("1.addition\n,2.subtrsction\n,3.multiplication\n,4.division\n,5.modules\n");
    scanf("%d",&number);
    switch(number)
    {
        case1:
        printf("enter thr first number");
        scanf("%d",&a);
        printf("enter the second number");
        scanf("%d",&b);
        printf("\n----------------------------\n");
        printf("sum is %d",total);
        printf("\n-----------------------------\n");
        break;
        case2:
        printf("enter thr first number");
        scanf("%d",&a);
        printf("enter the second number");
        scanf("%d",&b);
        printf("\n----------------------------\n");
        printf("sum is %d",total);
        printf("\n-----------------------------\n");
        break;
        case3:
        printf("enter thr first number");
        scanf("%d",&a);
        printf("enter the second number");
        scanf("%d",&b);
        printf("\n----------------------------\n");
        printf("sum is %d",total);
        printf("\n-----------------------------\n");
        break;
        case4:
        printf("enter thr first number");
        scanf("%d",&a);
        printf("enter the second number");
        scanf("%d",&b);
        printf("\n----------------------------\n");
        printf("sum is %d",total);
        printf("\n-----------------------------\n");
        break;
        return 0;
    }
    int sub(int a,int b)
    {
        //function defination
        int s=0;
        if(a>b)
        {
          s=a-b;
        }
        else
        {
            s=b-a;
        }
        return 0;
    }
}