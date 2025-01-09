#include<stdio.h>
int main()
{

    int i,sum=0,n;
    float avg=0.0;
    printf("Enter the 5 numbers:-");
    for(i =0; i < 5; i++)
    {
        scanf("%d", &n);
        sum = sum + n;
    }

    avg = sum / 5;
    printf("The average of the 5 numbers is: %.2f", avg);


    return 0;
}