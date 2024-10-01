#include<stdio.h>
int main()
{
    int num=31, no=50;
    int num1=31, no1=50;

    while(num<=40)
    {
        printf("%d\n", num);
        num++;
    }

    while(no >=40)
    {
        printf("%d\n", no);
        no--;
    }


    do 
    {
        printf("%d\n", num1);
        num1++;
    }
    while(num1 <=40);

    do {
        printf("%d\n", no1);
        no1--;
    }
    while(no1 >= 50);

}