#include<stdio.h>

int alphabate(char ch){
    int i;
    while(ch<='z'){
        printf("%c",ch);
        ch++;
    }
    return ch;
    }




int main(){

    alphabate('a');

    return 0;
}