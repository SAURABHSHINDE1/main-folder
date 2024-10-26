#include<stdio.h>

void bubblesort(int a[], int n){
    int i,j,temp;
    for(i = 0; i < n-1 ; i++)
    {
        for(j = 0; j< n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

         printf("\nAfter pass %d: \n", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", a[k]);
        }
    }
}
int main()
{
    int a[]={2,4,6,8,1,9,5,3,7,67,45,73,98,78,92,92,76,99,77,66,};
    int n=sizeof(a)/sizeof(a[0]);
    bubblesort(a,n);
    printf("\nThe sorted array is :");
    for(int i =0; i<n ; i++)
    {
        printf("%d ", a[i]);
    }
}