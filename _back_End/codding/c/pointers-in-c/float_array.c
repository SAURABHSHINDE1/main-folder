#include<stdio.h>

void array( float *ptr)
{
    int i;
    printf("Enter the array:");
    for(i=0 ;i< 5; i++)
    {
        scanf("%f",ptr+i);
    }
}

void print(float *ptr)
{
    int i;
    printf(" The array is :\n");
    for(i=0 ;i< 5; i++)
    {
        printf("%0.2f ",*(ptr+i));
    }
}
int main()
{
    float a[5];
     array(a);
     print(a);
    return 0;
}