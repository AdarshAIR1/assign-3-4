#include<stdio.h>
int main()
{
    float sp,cp,P,L;
    printf("enter the cp and sp respectively :");
    scanf("%f %f",&cp,&sp);
    P=((sp-cp)/cp)*100;
    L=((cp-sp)/cp)*100;
    if(sp>cp)
    {
        printf("profit is %f",P);
    }
    else if(cp>sp)
    {
        printf("loss is %f",&L);
    }
    printf("\n");
    return 0;
}