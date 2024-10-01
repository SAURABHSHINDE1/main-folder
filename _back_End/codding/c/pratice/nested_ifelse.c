#include<stdio.h>
int main()
{
    int a ,b = 13,c = 23,d = 5,e = 7;
    printf("Enter the value of a:-");
    scanf("%d",&a);

    if(a > 10)
    {
        if(b > c)
        {
            printf("b is greater");
        }
        else{
            printf("c is greater");
        }
    }
    else
    {
        if(d > e)
        {
            printf("d is greater");
        }
        else{
            printf("e is greater");
        }
    }
}