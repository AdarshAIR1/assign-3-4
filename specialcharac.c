#include<stdio.h>
int main()
{
   char ch;
   printf("enter : ");
   scanf("%c",&ch);
 if(ch<='z' && ch>='a')
   {
    printf("the input %c is a lowercase character ^_^",ch);
   }
    else if(ch<='Z' && ch>='A')
   {
    printf("the input %c is an uppercase character ^_^",ch);
   }
   else if(ch<='9' && ch>='0')
   {
    printf("the input %c is a digit ",ch);
   }
   else 
   printf(" special character *__*");
   printf("\n");
   return 0;
}