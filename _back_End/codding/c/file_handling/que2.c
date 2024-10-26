#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("saurabh.txt", "r");
    char data [30];
    if(fp == NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("File opened sucessfully!!!\n");
    }

    char c=fgetc(fp);

    
    while(c!= EOF)
    {
        printf("%c", c);
        c=fgetc(fp);
    }
    
    fclose(fp);

        
        return 0;
}
