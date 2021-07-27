#include<stdio.h>
#include<math.h>
void main()
{
 float d,r1,r2,a,b,c;
 printf("enter a,b,c");
 scanf("%f%f%f",&a,&b,&c);
 d=((b*b)-(4*a*c));
 if(d<0)
 {
   r1=((-b)/(2*a));
   r2=((-b)/(2*a));
   printf("\n root1 :%f +i %f",r1,(sqrt(-d)/(2*a)));
   printf("\n root2 :%f -i %f",r2,(sqrt(-d)/(2*a)));
  }
 else if(d==0)
  {
  r1=(-b)/(2*a);
  printf("the root is \n %f",r1);
  }
  else
 {
   r1=(((-b)+sqrt(d))/2*a);
   r2=(((-b)-sqrt(d))/2*a);
    printf(":has 2 roots \n root1 is %f  root 2 is %f",r1,r2); 
  }
}	
