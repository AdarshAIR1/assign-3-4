#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the month nos");
    scanf("%d",&a);
    if(a==1 || a==3 || a== 5 || a==7 || a==8 || a==10 || a==12)
    {
        printf("the nos of days are 31",b);
    }
    else 
    printf(" the nos of days are 30",b);
    printf("\n");
    return 0;
}