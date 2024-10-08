#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int sum ;


    int *ptr1=&a;
    int *ptr2=&b;
    sum = *ptr1 + *ptr2;
    printf("Sum is: %d", sum);
}