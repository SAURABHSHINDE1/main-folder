#include<stdio.h>

struct stack{
    int arry[5];
    int top;
    int size;
} s1;

int isfull()
{
    if(s1.top == s1.size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(){
    if(s1.top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int data){
    if(isfull())
    {
        printf("Stack Overflow\n");
    }
    else{
        s1.top ++;
        s1.arry[s1.top] = data;
        printf("%d is pushed\n", data);
    }
}

void pop(){
    if(isempty()){
        printf("Stack Underflow\n");
    }
    else{
        printf("%d is popped\n",s1.arry[s1.top]);
        s1.arry[s1.top] = 0;
        s1.top--;
    }
}
int main()
{
    s1.top = -1;
    s1.size = sizeof(s1.arry) / sizeof(s1.arry[0]);
    push(10);
    push(20);
    pop();

    return 0;
}