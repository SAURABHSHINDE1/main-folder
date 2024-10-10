#include<stdio.h>

int main()
{
    int n,m ,i, prime=0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0)
    {
        printf("number is  not prime ");
    }

    m=n/2;

    for( int i=2; i<=m; i++)
    {
       if(n % i ==0)
       {
            prime=1;
            break;
       }
    }
    
    if(prime == 0)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}