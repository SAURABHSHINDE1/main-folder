#include<stdio.h>
#include<stdlib.h>

struct stack{
    int *a;
    int top;
    int size;
}s;

int isfull(){
    if( s.top == s.size -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(){
    if(s.top ==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}   

void push( int data){
    if(isfull()){

        printf("Stack Overflow\n");
    }
    else{
        s.top ++;
        s.a[s.top] = data;
        printf("%d is pushed\n", data);
    }
}

void pop(){
    if(isempty()){
        printf("Stack Underflow\n");
    }
    else{
        printf("%d is popped\n", s.a[s.top]);
        s.a[s.top] = 0;
        s.top --;
    }
}
int top()
{
    return s.a[s.top];
}
int peek(int index)
{
   return s.a[index];
}

int main(){

    // struct stack s;
    s.size = 7;
    s.a =(int*) malloc(s.size * sizeof(int));
    s.top = -1;

    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    printf("Top Element = %d\n",top());
    printf("1 index element : %d",peek(1));
    return 0;

}