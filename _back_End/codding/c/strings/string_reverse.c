#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i;
    int temp;   
    int len=strlen(str);

    for(i = 0; i< len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    printf("Reversed string: %s", str);
}