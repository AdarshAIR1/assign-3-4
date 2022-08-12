#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("\nenter a three digit nos");
    scanf("%d",&a);
    c=a/100;
    f=a%100;
    b=f%10;
    d=f/10;
    printf("\n first digit=%d \nmiddle digit=%d \nlast digit=%d\n",b,d,c);
    e=b+c+d;
    printf("\nsum required : %d",e);
    return 0;

}