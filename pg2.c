#include<stdio.h>
void main(){
    int number=0;
    printf("enter a natural number");
    scanf("%d",&number);
    int sum=0;

    float average=0.0;
    for(int i=1; i<=number;i++)
    {
        sum +=i;    //1+2+3+4+5
    }
    average=sum/number;
    printf("sum pf natural number is : %d",sum);
    printf("average of natural numbers is : %f",average);
}