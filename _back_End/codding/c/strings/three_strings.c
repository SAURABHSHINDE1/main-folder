#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]={"saurabh"};
    char str2[20]={"saurabh"};
    char str3[20];

    if(strcmp(str1 , str2)==0)
    {
        printf("Strings Are Equal:\n");
    }
    else
    {
        strcat(str1 , str2);
        strcpy(str3 ,str1);
        printf("%s",str3);
    }

    
}