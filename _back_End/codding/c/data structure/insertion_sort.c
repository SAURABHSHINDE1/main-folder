#include<stdio.h>

void insertion_sort(int a[], int n){
    int i, j, key;
    for(i = 1; i < n; i++){
        key =a[i];
        j = i-1;
        while( j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        printf("\n After iteration %d\n",i);
        for(int k =0 ; k<n; k++)
        {
            printf("%d ",a[k]);
        }
    }
}

void printarray(int a[], int n)
{
    int i;
    printf("\nthe array is:");
    for(i=0; i< n; i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[]={4,2,3,6,7,5,1,7};
    int n=sizeof(a) / sizeof(a[0]);
    insertion_sort(a, n);
    printarray(a,n);
}