#include<stdio.h>
int main()
{
    int x,i;
    for(i=1;i<=3;i++)
    {
        printf("\nEnter an even number: ");
        scanf("%d",&x);
        if(x%2==0)
            break;

    }
    if(i==4)
      printf("gadhe ho tum");
      else
      printf("sabash beta");
      printf("\n");
      return 0; 
}