#include<stdio.h>
void swap()
{
    int a=10, b=15, temp;
    temp = a;
    a = b;
    b = temp;
    printf(" Swapped number: a = %d, b = %d\n", a, b);
}

void swap1( int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf(" Swapped number: a = %d, b = %d", a, b);
}

int main()
{
    
    swap();
    swap1(5,7);
    return 0;
 
}