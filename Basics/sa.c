#include<stdio.h>
void main()
{
int s1,s2,roll,asg,newmark,total,SERIESTOT;
char name;
printf("enter the name of then student");
scanf("%s",&name);
printf("enter the roll number of the student");
scanf("%d",&roll);
printf(" enter the marks of series1 and series2");
scanf("%d%d",&s1,&s2);
printf("enter the assignment score");
scanf("%d",&asg);
SERIESTOT=s1+s2;
newmark=((SERIESTOT*30)/100);
total=newmark+asg;
printf("\nPROGRESS REPORT\n");
printf("\nname=%c\n",name);
printf("\nroll no:%d\n ",roll);
printf("\ntotal mark:%d\n",total);
}
