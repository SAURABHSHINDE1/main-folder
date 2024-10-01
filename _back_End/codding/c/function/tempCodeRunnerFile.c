#include<stdio.h>

int odd(int n){
    int i=1;

    while(i>=n){
        if(i%2==0){
            printf(" the number is odd%d\n",i);
        }
        else{
            printf("the number is even%d\n",i);
        }
        i++;