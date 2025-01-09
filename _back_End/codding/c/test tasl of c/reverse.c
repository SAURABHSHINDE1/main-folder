#include<stdio.h>
int main()
{
    int num =54647;
    int rev=0;

    while(num!=0)
    {
        rev = num % 10 + rev *10;
        num=num/10;
    }

    printf(" The Reverse No:- %d",rev);
} 