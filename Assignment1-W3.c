//Program to find square of any number using function
#include<stdio.h>

int square(int n)
{
    return n*n;
}
int main(){
    int n, sqr;
    printf("Enter a number:");
    scanf("%d",&n);
    sqr=square(n);  //function calling
    printf("\nThe square of %d = %d",n ,sqr);
    return 0;
}


