#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c,s ;
    float A;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    s = (a + b + c)/2;
    printf("The area of triangle  is: %d", s);

    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nThe area of the triangle is: %f", A);


}