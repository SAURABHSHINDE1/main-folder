#include<stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    int **ptr_to_ptr = &ptr;

    printf("%d ", **ptr_to_ptr);
    

    return 0;
}