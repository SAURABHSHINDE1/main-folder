#include<stdio.h>

int main()
{
    int a[5];
    int b[5];
    
    printf("Enter the elements in array:-");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for( int i=0; i<=5; i++)
    {
        b[i]=a[i];
    }

    for( int i =0; i <= 5; i++){
        printf("%d",b[i]);
    }
    printf("\n");

    return 0;
}