#include<stdio.h>

int main(){

    int a[5];
    int min=a[0];
    printf("Enter the elements in array:");
    for( int i=0; i<=5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for( int i=0; i<=5; i++)
    {
        if(a[i]<min){
            min=a[i];
        }

    }
    printf("The minimum value is :%d\n",min);

    return 0;
}