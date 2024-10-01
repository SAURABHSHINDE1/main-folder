#include<stdio.h>

int main()
{
    int num;
    int rem;
    int rev=0;

    printf("Enter the value of number :");
    scanf("%d",&num);

    while(num != 0) 
    {
        rem=num%10;
        rev = rev*10+rem;
        num=num/10;
    }

    printf("%d\n", rev);

    return 0;
}  