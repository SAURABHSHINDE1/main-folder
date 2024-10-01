#include<stdio.h>

int main()
{
    int a[10];
    int b;

    printf("Enter the elements in the array:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the position to delete array element (1-10):");
    scanf("%d",&b);
    b = b - 1;

    if(b >= 0 && b < 10) {
        for(int i=b; i<9; i++){
            a[i] = a[i+1];
        }
    } else {
        printf("Invalid position. Please enter a position between 1 and 10.\n");
        return 1;
    }

    printf("Array after deletion:\n");
    for( int i=0; i<9; i++){
        printf("%d\n",a[i]);
    }

    return 0;
}