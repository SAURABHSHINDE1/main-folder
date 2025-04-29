// #include<stdio.h>
// #define add(a,b) ((a) + (b))
// int main()
// {
//     int a,b;
//     printf("Enter the value of A and B: ");
//     scanf("%d %d",&a,&b);
//     int result=add(a,b);
//     printf(" addition= %d",result);
//     return 0;
// }

// #include<stdio.h>
// #define Multiplication(a,b) ((a)-(b))
// int main()
// {
//     int a,b;
//     printf("enter the value of A and B;");
//     scanf("%d %d",&a,&b);
//     int result=Multiplication(a,b);
//     printf("Multiplication= %d",result);
//     return 0;
// }

// #include<stdio.h>
// #define subtract(a,b)((a)+(b))
// int main()
// {
//     int a,b;
//     printf("Enter the value of A and B: ");
//     scanf("%d %d",&a,&b);
//     int result=subtract(a,b);
//     printf("substract+%d",result);
// } 

#include<stdio.h>
#define add(a,b) ((a)+(b))
{
    int a,b;
    printf("Enter the value of A and B: ");
    scanf("%d %d",&a,&b);
    int result=add(a,b);
    printf("Addition= %d",result);
    return 0;
}