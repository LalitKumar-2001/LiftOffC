//Program to find factorial of a number using recurssion 

#include<stdio.h>

 int factorial(int n)
 {
     int fact;
     if(n==1)
     fact=1;
     else
     fact= n * factorial(n-1);   //recursive statement
     return fact;
 }

 int main()
 {
     int num , f;
     printf("Enter a number: ");
     scanf("%d", &num);
     f = factorial(num);
     printf("The factorial of %d = %d", num, f);
     return 0;
 }