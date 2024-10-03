#include<stdio.h>

char add(char a, char b)
{
  
    if( a>b)
    {
        printf("%c is greater",a);
    }
    else
    {
        printf("%c is greater",b);
    }
}

int main()

{
    add('r','z');
    return 0;
}