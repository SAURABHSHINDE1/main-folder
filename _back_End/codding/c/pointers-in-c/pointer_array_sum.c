#include<stdio.h>
int add(int *ptr){

    int i;
    printf("enter array elements:");
    for(i=0;i<10;i++){
        scanf("%d",ptr+i);
    }
}

int sum(int *ptr)
{
    int i;
    int sum=0;
    for(i=0;i<10;i++){
        sum=sum+ *(ptr+i);
    }
    return sum;
}
int main()
{
    int a[10],s;
    add(a);
    s = sum(a);
    printf("sum of array is:%d",s);
    
}