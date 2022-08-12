#include<stdio.h>
int main()
{
     char ch;
     printf("Enter a character :");
     scanf("%c",&ch);
     if( ch<='z' && ch>='a' )
     {
     printf("character %c is lowercase ");
     }
     else if( ch<='Z' && ch>='A')
     {
     printf("character %c is  uppercase ");
     }
     else
     printf(" invalid");
     printf("\n");
     return 0; 
}