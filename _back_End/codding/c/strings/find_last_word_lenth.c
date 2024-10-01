#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="my name";
    int i;
    int count=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count=0;
        }
        else{
            count++;
        }
        
    }
   
    printf("Total words: %d",count);

}