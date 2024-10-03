#include <stdio.h>

int fseries(int n)
{
    int fibo;
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        fibo = fseries(n - 1) + fseries(n - 2);
        return fibo;
    }
}
int main()
{
    int fibo, i;
    for (i = 1; i <= 25; i++)
    {
        printf("%d  ", fseries(i));
    }
    return 0;
}
