#include<stdio.h>
int main()
{
    int a;
    printf("enter a nos ");
    scanf("%d",&a);
    if(a%7==0)
    {
    printf("the nos %d is divisible by 7 ",a);
}
   else if(a%3==0)
   {
   printf(" the nos %d is divisible by 3",a);
   }
   else 
   printf(" divisible by none ");
   printf("\n");
   return 0;
}