#include<stdio.h>

int main()
{
   int n ;

    for (n=1; n<=10; n++)
    {
        if(n == 6)
        {
            break;
        }
        printf("%d",n);
    }


    printf("\n");
    
    for(n=1; n<= 10;  n++)
    {
        if(n == 6)
        {
            continue;
        }
        printf("%d",n);
    }
    return 0; 
}