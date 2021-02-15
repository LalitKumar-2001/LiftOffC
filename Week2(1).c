//Program to calculate the sum of digits

#include<stdio.h>
void main()
{
    int num, sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0)            //This checks that number should be greater than zero
    {
        int m=num%10;
        sum=sum+m;
        num=num/10;
    }
    printf("Sum=%d",sum);

}
