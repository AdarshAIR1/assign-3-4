#include<stdio.h>
int main()
{
    int a;
    printf("enter a year :");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("the year is a leap year ");
    }
    else
    {
        printf("normal year ^_^");
    }
    return 0;
}