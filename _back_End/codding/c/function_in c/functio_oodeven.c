#include<stdio.h>
void oddeven()
{
    int num=29;
    if(num%2==0)
    {
        printf("%d is even\n",num);
    }
    else
    {
        printf("%d is odd\n",num);
    }
}


void oddeven1( int num1)
{
    if(num1%2==0)
    {
        printf("%d is even\n",num1);
    }
    else
    {
        printf("%d is odd\n",num1);
    }
}

int main()
 {
    oddeven();
    oddeven1(22);
    return 0;
}
