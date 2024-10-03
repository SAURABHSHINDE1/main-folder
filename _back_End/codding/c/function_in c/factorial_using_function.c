#include<stdio.h>

int factorial()
{
    int num=5;
    int fact = 1;
    for(int i = 1; i <= num; i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int num;
    num=factorial();
    printf("Factorial of  is: %d\n", num);
}