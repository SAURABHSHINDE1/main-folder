#include<stdio.h>

    int digitcount(int n){
        int count=0;
        while(n >0){
            n=n/10;
            count++;
        }

        return count;
    }


int main(){

    int count=digitcount(100);

    printf("the count is:%d\n", count);
    
    return 0;
}