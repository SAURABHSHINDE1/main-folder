#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("saurabh.txt","w");
    if(ptr==NULL)
    {
        printf("file not created");
    }
    else
    {
        printf("file created");
    }
    
    fprintf(ptr,"name:saurabh shinde \n age:19\n address:loni kh\n");

    fclose(ptr);
    return 0;
}