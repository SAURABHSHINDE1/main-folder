#include<stdio.h>
    void insertion_sort(int a[] , int n)
    {
        int i,j,key;
       
        for( i=1 ; i < n; i++)
        {
            key=a[i];
            j=i-1;
            while(j>=0 && a[j] < key)
            {
                a[j+1] =a[j];
                j--;;
            }
            a[j+1] = key;
        }
        
    }

    int printarray(int a[], int n )
    {
        int i;
        printf("Sorted array is:\n");
        for(i=0; i<n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

int main()
{
    int a[7]={2,5,4,7,3,1,6};
    int n=sizeof(a)/sizeof(a[0]);
    insertion_sort(a,n);
    printarray(a,n);
}