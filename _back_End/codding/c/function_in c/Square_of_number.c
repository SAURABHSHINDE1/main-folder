#include<stdio.h>

void square()
{
    int num=4;
    int result=num*num;
    printf("Square of %d is %d\n", num, result);
}

void square1(int num1)
{
    int result1=num1*num1;
    printf("Square of %d is %d\n", num1, result1);
}

int main(){
    square();
    square1(5);
}    
