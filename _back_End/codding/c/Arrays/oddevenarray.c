#include<stdio.h>

int main()
{

int a[10];

printf("Enter the elements in the array");
for( int i=0; i<=10; i++)
{
    scanf("%d",&a[i]);
}

for( int i=0; i<=10; i++){
    if(a[i] % 2==0)
    {
        printf("the even number is %d\n",a[i]);
    }
    else{
        printf("the odd number id %d\n",a[i]);
    }
}


    return 0;
}