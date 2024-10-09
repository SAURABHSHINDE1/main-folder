#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number:\n");
    scanf("%d %d %d",&a,&b,&c);

    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;

    if(*ptr1 > *ptr2 && *ptr1 > *ptr3)
    {
        printf("%d is the biggest number",*ptr1);
    }
    else if(*ptr2 > *ptr1 && *ptr2 > *ptr3)
    {
        printf("%d is the biggest number",*ptr2);
    } 
    else
    {
        printf("%d is the biggest number",*ptr3);
    }

}