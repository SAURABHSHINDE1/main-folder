#include<stdio.h>

int number(int num)
{
   
    if(num<=50)
    {
        printf("%d ",num);
        number(num+1);
    }
   
}

int main()
{   number(1);
    return 0;
}