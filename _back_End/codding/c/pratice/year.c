#include<stdio.h>

int main()
{
    int number , year , weeks, months, days;
    
    printf("Enter a number:- ");
    scanf("%d",&number);

    year = number / 365;
    days = number % 365;
    months = days / 30;
    days = days % 30;
    weeks = days /7;
    days = days % 7;

    printf("year=%d\n""months=%d\n""weeks=%d\n""days=%d\n",year,months,weeks,days);


    return 0;
}