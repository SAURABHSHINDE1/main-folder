#include<stdio.h>

int main()
{

    int n;

    printf("Enter the value of n:-");
    scanf("%d",&n);

    if(n % 7 ==0)
    {
        printf("%d is divisible by 7.\n",n);

    }

    else{
        printf("%d is not divisible by 7.\n",n);
    }

}