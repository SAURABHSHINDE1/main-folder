#include<stdio.h>
int main()
{
    char a[5],i;
    char *p = &a[0];
    for(i=0; i<5; i++)
    {
        printf("the address of a[%d] is %d\n",i,p+i);
    }
}