#include<stdio.h>
void prime()
{
    int n=17,m,i,prime=0;

    if(n==0)
    {
        printf("Number is not prime\n");
    }
    m=n/2;

    for(i=2; i<m; i++)
    {
        if(n%i==0)
        {
        prime=1;
        break;
        }
    }

    if(prime==0)
    {
        printf("Number is prime\n");
    }
    else
    {
        printf("Number is not prime\n");
    }
}



void prime1(int n)  
{
    int m,i,prime=0;

    if(n==0 || n == 1)
    {
        printf("Number is not prime\n");
    }
    m=n/2;

    for(i=2; i<=m; i++)
    {
        if(n%i == 0)
        {
        prime=1;
        break;
        }
    }

    if(prime==0)
    {
        printf("Number is prime\n");
    }
    else
    {
        printf("Number is not prime\n");
    }
}

int main()
{
    prime();
    prime1(23);
    return 0;
}