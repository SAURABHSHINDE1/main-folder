#include<stdio.h>

int main()
{
    int height;

    printf("Enter the height:-");
    scanf("%d",&height);

    if(height >= 150)
    {
        printf("your height is toll");
    }
    else
    {
        printf("your height is short");
    }

    return 0;
}