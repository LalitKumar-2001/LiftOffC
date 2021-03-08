//Program to find the factorial of a number using function
#include<stdio.h>

int fact(int n)
{
    int i, fc=1;
    for(i=1;i<=n;i++)
    {
        fc=fc*i;
    }
    return fc;
}

int main()
{
    int no, factorial;
    printf("Enter a number");
    scanf("%d", &no);
    factorial=fact(no);
    printf("The factorial of %d is %d ", no , factorial);
    return 0;
}


