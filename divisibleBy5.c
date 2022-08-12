#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("the nos is divisible by 5");
    }
  else
    {
        printf("the nos is not divisible by 5");
    }
    printf("\n");
    return 0;
}