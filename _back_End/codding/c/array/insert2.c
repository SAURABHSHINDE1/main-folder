#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    int n=5;
    int j=n;
    while(j>0)
    {
        a[j] = a[j-1];
        j--;
    }


   a[0] = 7;
    for(i=0; i<6; i++)
    {
       //  a[0]=7;
        printf("%d ", a[i]);
    }
}