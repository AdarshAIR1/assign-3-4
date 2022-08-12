#include<stdio.h>
int main()
{
    int x,a,b,c,d,e ;
    printf("enter the marks of the subjects :");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    a=a/100;
    b=b/100;
    c=c/100;
    d=d/100;
    e=e/100;
    if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33)
    {
        printf("pass");
    }
    else 
    {
        printf("fail");
    }
    printf("\n");
    return 0;
}    