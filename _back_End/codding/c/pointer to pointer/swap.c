#include<stdio.h>
void swap(int* a , int* b)
{
    printf("Adreess of a = %d \nAdress of b = %d\n",a,b);
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 5,b = 10;
    printf("Adreess of a = %d \nAdress of b = %d\n",&a,&b);
    swap(&a,&b);
    printf("After swapping a = %d  b = %d",a,b);
}