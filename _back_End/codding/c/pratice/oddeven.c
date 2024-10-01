#include<stdio.h>
int main(){

    int n;

    printf("Enter the value of n:-");
    scanf("%d",&n);

    if(n % 2 == 0){
        printf("The given number %d is an even number.",n);
    }
     else
     {
         printf("The given number %d is an odd number.",n);
        
    }
}