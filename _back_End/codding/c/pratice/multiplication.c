#include<stdio.h>

int main()
{

int n;
int mult=0;

printf("enter the value of n:");
scanf("%d",&n);

for(int i=1; i<=10; i++)
{
   printf("%d\n",i*n);
}

    return 0;
}