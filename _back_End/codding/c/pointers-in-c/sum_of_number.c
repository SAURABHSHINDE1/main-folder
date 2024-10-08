#include<stdio.h>

int add(int *a, int *b)
{
    int sum=*a+*b;
    printf("Sum is:%d",sum);
}

int main()
{
    int a=10, b=20;
    add(&a,&b);
}