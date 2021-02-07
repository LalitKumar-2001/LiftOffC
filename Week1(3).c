  /*Program to find the diameter,circumference and area of a circle
  by taking the radius as input*/ 

#include<stdio.h>
void main()
{ 
    float r;        //variable for radius
    float p=3.14;    // var p has been declared with some initial value
    float d,c,a;
    printf("Type the value of Radius\n");
    scanf("%f",&r);
      d=2*r;     //diameter calculation
      c=2*p*r;      //ciircumference calculation
      a=p*r*r;      //area calculation
      
    printf("Diameter= %f \n",d);
    printf("Circumferance= %f \n",c);    
    printf("Area= %f \n",a);

}