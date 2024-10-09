#include<stdio.h>

int big(int *a, int *b)
{
    if(*a > *b)
    {
        printf("%d is bigger",*a);
    }
    else{
        printf("%d is bigger",*b);
    }
}
int main()
{
    int a=10,b=12;
    big(&a,&b);
}
   