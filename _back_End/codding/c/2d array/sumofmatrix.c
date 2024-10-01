#include<stdio.h>

int main()
{
    int a,b;
    int a[5][5];
    int sum=0;
    long long product=1;


    printf("Enter the elements of matrix");
    scanf("%d %d", &a,&b);

    for( int i = 0; i <  5; i++)
    {
        for( int j = 0; j < 5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    for( int i = 0; i < 5; i++)
    {
        for( int j = 0; j < 5; j++)
        {
            sum += a[i][j];
            product *= a[i][j];
        }
    }

    return 0;
}