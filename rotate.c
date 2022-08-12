#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a nos ");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    a=c*100 + b;
    printf("%d",a);
    return 0;


}