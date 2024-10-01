#include<stdio.h>

int main()
{
   int x ;

    printf("enter the value of x:-");
    scanf("%d",&x);

   
    if(x < 0)
    {
        printf("-1");
    }
    if(x==0)
    {
        printf("0");

    }
    if(x > 0)
    {
        printf("1");
    }
 
}