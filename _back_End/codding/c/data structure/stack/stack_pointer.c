#include<stdio.h>
#include<stdlib.h>

struct stack{
    int *a;
    int top;
    int size;
};

int isfull(struct stack* s){
    if( s->top == s->size -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(struct stack *s){
    if(s->top ==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}   

void push( struct stack* s,int data){
    if(isfull(s)){

        printf("Stack Overflow\n");
    }
    else{
        s->top ++;
        s->a[s->top] = data;
        printf("%d is pushed\n", data);
    }
}

void pop(struct stack *s){
    if(isempty(s)){
        printf("Stack Underflow\n");
    }
    else{
        printf("%d is popped\n", s->a[s->top]);
        s->a[s->top] = 0;
        s->top --;
    }
}
int top(struct stack *s)
{
    return s->a[s->top];
}
int peek(struct stack *s,int index)
{
   return s->a[index];
}

int main(){

    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    s->size = 7;
    s->a =(int*) malloc(s->size * sizeof(int));
    s->top = -1;

    push(s,10);
    push(s,20);
    push(s,30);
    push(s,40);
    pop(s);
    printf("Top Element = %d\n",top(s));
    printf("1 index element : %d",peek(s,1));
    return 0;

}