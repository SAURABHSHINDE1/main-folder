#include<stdio.h>
int main()
{
    int n , product;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    product = 1;
    while(product<=10)
    {
        printf("\n%d",n*product);
        product++;
    }

    printf("\n");

    int n1,product1=1;
    printf("Enter the value of n: ");
    scanf("%d",&n1);
    do 
    {
        printf("\n%d",n1*product1);
        product1++;
    }
    while(product1<=10);
}