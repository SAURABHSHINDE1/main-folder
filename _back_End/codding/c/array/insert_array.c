#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter 5 numbers: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]+1);
    }
    
    printf("the array is :");
    for(int i=0; i<6; i++)
    {
        arr[0]=12;
        printf("%d ", arr[i]);
    }
}