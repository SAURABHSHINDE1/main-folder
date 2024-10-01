#include<stdio.h>
int main()
{
    int a , b, c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    c = a+b;
    printf("Sum of %d + %d is: %d\n",a,b,c);

    c = a-b;
    printf("substraction of %d - %d is: %d\n",a,b,c);

    c = a*b;
    printf("multiplication of %d * %d is: %d\n",a,b,c);

    c = a/b;
    printf("divsion of %d / %d is: %d\n",a,b,c);

    c = a%b;
    printf("remainder of %d % %d is: %d\n",a,b,c);

    

    return 0;

}