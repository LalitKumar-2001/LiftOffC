  /*Program to find percentage and assign grades 
  by taking marks of different subjects as input */ 

#include<stdio.h>
void main()
{ 
    int p,c,b,m,o;
    printf("Enter your score in Physics,Chemistry,Biology,Mathematics and Computer ");
    scanf("%d %d %d %d %d ",&p,&c,&b,&m,&o);
    float pe;   //variable for percentage
    pe=(p+c+b+m+o)/5;   //percentage calculation
    printf("\nYou have received a ");
if(pe>=90) 
    printf("Grade A");

else if(pe<90 && pe>=80)
    printf("Grade B");

else if(pe<80 && pe>=70)
   printf("Grade C");

else if(pe<70 && pe>=60)
    printf("Grade D");

else if(pe<60 && pe>=40)
    printf("Grade E");

else
    printf("Grade F");

}