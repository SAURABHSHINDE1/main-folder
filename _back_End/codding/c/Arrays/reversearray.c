#include<stdio.h>

int main(){
    int a[10];
    int temp, i, j;

    printf("Enter the elements in the array:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

 

    printf("Reversed array: ");
    for(i=0; i<10; i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}