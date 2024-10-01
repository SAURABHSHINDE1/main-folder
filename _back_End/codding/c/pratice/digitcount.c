#include<stdio.h>

int main()
{

    int num;
    int countnum=0;


    printf("Enter the value of no:");
    scanf("%d",&num);

    while(num > 0)
    {
        num=num/ 10;

        countnum++;
    }
    
   printf("%d",countnum);
       

    return 0;
}