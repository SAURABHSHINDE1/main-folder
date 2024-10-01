#include<stdio.h>

int main()
{
    int n;
    int first;
    int rem;
    int sum=0;

    printf("Enter the value of n:");
    scanf("%d",&n);

    rem=n % 10;

    first=n;

    while(first >= 10){

        first=first/10;

    }

    sum=first+rem; 


    printf("%d\n",sum);
}

