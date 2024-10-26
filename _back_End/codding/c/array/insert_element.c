#include<stdio.h>
int main()
{
    int a[6]={1,2,3,4,5,6};
    int k=5,i;
    int n=sizeof(a)/sizeof(a[0]);
    int j=n;
    while(j>k)
    {
        a[j]= a[j-1];
        j--;
    }
    a[k]=9;
    for(i=0; i<=6; i++)
    {
        printf("%d ", a[i]);
    
    }
}