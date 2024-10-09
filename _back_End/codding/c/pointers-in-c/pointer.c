#include<stdio.h>

int value(int *a)
{
    *a=12;
 //   return *a;
}
int main()
{
   

    int a=10;
    value(&a);
    printf("the value of a is:%d",a);




     int a=10;
    int b=20;
    printf("value of a is:%d\n",a);
    printf("value of b is:%d\n",b);
    printf("the address of a is:%p\n",&a);
    printf("\n the address of b is:%p\n",&b);
    int *p=&a;
    int  *p2=&b;
    printf("the address of a= %p\n",p);
    printf("\n the address of b= %p\n",p2);

    int ch='a';
    int ch2='b';
    printf(" the value of ch is:%c\n",ch);
    printf(" the value of ch2 is:%c\n",ch2);
    printf("the address of ch is:%p\n",&ch);
    printf("\n the address of ch2 is:%p\n",&ch2);
    char *ptr=&ch;
    char *ptr2=&ch2;
    printf("\n the address of ch= %p\n",ptr);
    printf("\n the address of ch2= %p\n",ptr2);




    char a='s';
    char b='t';

    char *ptr1=&a;
    char *ptr2=&b;

    printf("\n address a=%p \n address b=%p",&a,&b);

    printf("\na=%c\nb=%c",*ptr1,*ptr2);
    
    printf("\n address a=%p\n address b=%p",ptr1,ptr2);

    return 0;

}