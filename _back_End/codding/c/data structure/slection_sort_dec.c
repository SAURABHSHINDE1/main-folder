#include<stdio.h>


void selection_sort(int a[], int n )
{
    
    int i, j, min, temp;
    for( i = 0; i < n; i++ )
    {
        min = i;
        for( j =i+1; j < n ; j++)
        {
            if( a[j]> a[min] )
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main(){
    int a[5]={7,2,1,6,4};
    int n=sizeof(a)/sizeof(a[0]);
    selection_sort(a,n);

    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
}