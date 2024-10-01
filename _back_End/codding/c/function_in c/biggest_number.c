#include<stdio.h>

void big()
{
    int a=10,b=23;
    if(a>b)
    {
        printf("%d is bigger",a);
    }
    else
    {
        printf("%d is bigger\n",b);
    }
}

void big1(int a, int b)
{
    if(a> b)
    {
        printf("%d is bigger",a);
    }
    else{
        printf("%d is bigger \n",b);
    }
}

int main()
{
    big();
    big1(12, 25);
    return 0;
}