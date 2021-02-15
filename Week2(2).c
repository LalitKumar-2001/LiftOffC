/*Program to print the sum of all the even elements and even position elements
in an array*/

#include<stdio.h>
void main()
{
    int num[10],i;
    printf("Enter 10 numbers(without spaces):\n");
    for(i=0;i<10;i++)                   //Input of numbers into the array
    {
        scanf("%d",&num[i]);

    }

//First part of the program

    printf("The numbers which are even are:");
    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)             //Condition to check for numbers in array which are divisible by 2
        {
            printf("\n%d",num[i]);
        }
    }

//Second part of the program

    printf("\nThe numbers that are at even positions are:");
    for(i=0;i<10;i=i+2)
        /*i starts from 0 and then i is changed to i+2 that jumps two positions from zero.
            Thus only even positions are alloted to i.*/
    printf("\n%d",num[i]);

}
