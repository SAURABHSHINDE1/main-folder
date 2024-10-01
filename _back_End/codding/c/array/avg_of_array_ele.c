#include<stdio.h>
int main()
{
    int array[10];
    int sum=0;
    float avg=0;
    for(int i=0; i<10; i++)
    {
        array[i]=i+1;

        sum=sum+array[i];
        avg=sum/10; 
    }

    printf("Sum=%d\nAverage=%f", sum, avg);
    
    return 0;
 
}