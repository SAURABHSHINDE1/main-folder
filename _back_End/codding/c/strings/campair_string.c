#include<stdio.h>
#include<string.h>
int main()
{
    char str[10]="saurabh";

    char str2[10];
    printf("Enter a password:");
    scanf("%s",&str2);

    if(strcmp(str, str2)== 0)
    {
        printf("Password is correct");
    }
    else
    {
        printf("Password is not correct");
    }
}