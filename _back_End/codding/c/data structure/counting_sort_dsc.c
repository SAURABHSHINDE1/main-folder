#include<stdio.h>

void counting_sort(int a[], int n )
{
    int i, j, max=0;
    for(i = 0; i < n; i++)
    {
        if(max< a[i])
        {
            max = a[i];
        }
    }

    int b[max+1];
    for( i = 0; i < max+1 ; i++)
    {
        b[i] = 0;
    }

    for(i = 0; i <= n-1; i++)
    {
        b[a[i]] = b[a[i]] + 1;
    }
    i=0;
    j=0;
    while(i <= max)
    {
       if(b[i] > 0)
       {
        a[j] =i;
        b[i]--;
        j++;
       }
       else{
        i++;
       }

    }
}

void printarray( int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[7]={2,5,4,7,3,1,6};
    int n=sizeof(a)/sizeof(a[0]);
    counting_sort(a, n);
    printarray(a, n);
}