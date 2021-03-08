//Program to find GCD & LCM of two numbers using recursion
#include<stdio.h>
 int gcd(int n1, int n2);

 int main()
 {
     int num1,num2, g , l;
     printf("Enter two numbers:");
     scanf("%d %d", &num1, &num2);
     g = gcd(num1,num2);
     l = (num1*num2)/g;
     printf("\nThe greatest common divisor:%d",g);
     printf("\nThe least common divisor:%d \t",l);
     return 0;

 }

 int gcd(int n1 , int n2)
 { 
     if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;

 }

