#include<stdio.h>
int main()
{
    int a;
    printf("enter a nos :");
    scanf("%d",&a);
    if( a%3==0 && a%2==0)
    {
        printf("the nos %d is divisible by both",a);
    }
    else 
    printf(" not divisible");
    printf("\n");
    return 0;
}