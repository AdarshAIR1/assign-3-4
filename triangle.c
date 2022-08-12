#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter The Values");
    scanf("%d%d%d",&a,&b,&c);
     if(c<a+b)
     {
        printf("the triangle can be formed");
     }
     else 
     {
        printf("invalid");
     }
     printf("\n");
     return 0;
}