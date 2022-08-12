#include<stdio.h>
int main()
{
    int a,b,c,res;
    printf("Enter the coefficient of first degree variable");
    scanf("%d",&a);
    printf("enter the coefficient of second degree variable");
    scanf("%d",&b);
    printf("enter the coefficeint of constant of the given quadratic equation");
    scanf("%d",&c);
    res=(b*b)-(4*a*c);
    if(res>0)
    {
        printf("the roots are real and distinct");
    }
    if(res<0)
    {
        printf("the roots are imaginary");
    }
    if(res=0)
    {
        printf("the roots are equal");
    }
    printf("\n");
    return 0;

}