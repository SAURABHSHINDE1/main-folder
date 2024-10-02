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

void big1(int a, int b,int c)
{
    if(a> b && a>c)
    {
        printf("%d is bigger",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is bigger \n",b);
    }
    else{
        printf("%d is bigger\n",c);
    }
}

int main()
{
    big();
    big1(12, 25,70);
    return 0;
}