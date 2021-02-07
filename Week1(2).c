#include <stdio.h>
void main()
{
 int c;                                          //Variable initiation 
 printf("Type your temperature in Celcius");    //Input of temperature
 scanf("%d",&c);  
 printf("\n The tempertaure in Fahrenheit: ");
 int f=((c*9)/5)+32;   
 printf("%d",f);

}