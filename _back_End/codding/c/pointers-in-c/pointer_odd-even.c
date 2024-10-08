#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
     int *ptr=&num;

     if(*ptr % 2 == 0)
     {
         printf("The number is even");
     }
     else
     {
         printf("The number is odd");
     }
}