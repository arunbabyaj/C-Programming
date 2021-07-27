#include<stdio.h>
#include<math.h>
void main()
{
 float d,r1,r2,a,b,c;
 printf("\n Enter the values of a,b,c:");
 scanf("%f%f%f",&a,&b,&c);
 d=b*b-4*a*c;
 if(d<0)
 {
   printf("\n roots are imaginary \n");
 }  
 else if(d>0)
 {
  r1=(-b+sqrt(d))/(2*a);
   r2=(-b-sqrt(d))/(2*a);
   printf("\n root is %f and %f\n",r1,r2);
 }
 else
 {
    r1=r2;
    r1=(-b/2*a);
   printf("\n only one root");
   printf("\n root is %f \n",r1);
    
 }
}

