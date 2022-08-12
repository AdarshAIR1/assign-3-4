#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three nos :");
    scanf("%d%d%d",&a,&b,&c);
    printf("largest of them is %d",a>b? a>c?a:c : b>c?b:c);
    printf("\n");
    return 0;

}