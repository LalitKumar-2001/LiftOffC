//Program to check whether a given number is palindrome or not using recursion

/*
    A palindromic number (also known as a numeral palindrome or a numeric palindrome) 
    is a number (such as 16461) that remains the same when its digits are reversed.
*/

#include<stdio.h>

int palin(int n)
{
    static int rev = 0;

    if(n!=0)
    {
        rev = rev*10 + n%10;
        palin(n/10);
    }

    if(n==rev)
    {  return 1; }
    
    return 0;
    
}

int main()
{
    int num , check;
    printf("Enter a number to be checked for palindrome: ");
    scanf("%d", &num);
    check = palin(num);

    if(check == 1)
    {
        printf("\nThe number is a palindrome");
    }
    else
    printf("\nThe number is not a palindrome");
    return 0;

}
