#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("saurabh.txt", "r");
    char ch;
    int count = 0;
    if(fp == NULL)
    { 
        printf("File not found");
    }
    else
    {
        printf("File opened sucessfully!!!");
    }
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == ' ' || ch == '\t' || ch =='\n')
        {
            count++;
        }
    }

    printf("\n the words in a text file :%d" , count);

}