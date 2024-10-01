#include<stdio.h>
int main()
{
    int number;

    do
    {
        printf("Enter the value of nunber:-");
        scanf("%d",&number);
        printf("The value of number is %d\n", number);
        number++;
    }
    while(number > 0);
}