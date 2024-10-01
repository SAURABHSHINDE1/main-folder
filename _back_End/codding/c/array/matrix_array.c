#include<stdio.h>
int main()
{
    int array[10];
    int sum=0;
    for(int i=0; i<10; i++){
        array[i]=i+1;
        sum=sum+array[i];
    }

    printf(" sum=%d", sum);
    
   
}
