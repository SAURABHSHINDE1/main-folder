#include<stdio.h>

int reverse(int num){
    int rev=0;
    int rem;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        printf("%d\n", rev);

    }
    return rev;
}




int main(){

    reverse(34);


    return 0;
}