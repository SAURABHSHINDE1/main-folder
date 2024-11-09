#include<stdio.h>

void bubblesort(int a[],int n)
{
    int i,j,temp;
    for( i = 0 ; i < n ; i++)
    {
        for(j = 0; j < n-1-i; j++)
        {
            if(a[j] < a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

 int printarray(int a[], int n)
{
    int i;
    printf("Sorted array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int a[7]={2,5,4,7,3,1,6};
    int n=sizeof(a)/sizeof(a[0]);
    bubblesort(a,n);
    printarray(a,n);
    return 0;
}