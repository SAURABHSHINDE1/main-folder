// to accept and display array element

#include<stdio.h>

int main()
{
    int a[10];

    printf("Enter the elements in the array:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    for( int i=0; i<10; i++){
        printf("%d\n",a[i]);
    }

    return 0;
}