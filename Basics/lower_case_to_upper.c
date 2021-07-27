#include<stdio.h>
void main()
 {
   char ch,l,u;
   printf("enter the character");
   scanf("%c",&ch);
   if(ch>=65 && ch<=90 )
   {
    l=ch+32;
     printf("\n after converting upper case to lower case %c\n",l);
    }
  else if( ch>=97 && ch<=122)
  {
    u=ch-32;
    printf("\n after converting lower case to uppercase %c \n",u);
   }
  else
    {
      printf("\n invalid character \n");
     }
 }
