#include<stdio.h>
int stack[7];
int size =7;
int top = -1;

int isfull()
{
    if(top == size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(){
    if( top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(int data)
{
    if(isfull())
    {
        printf("Stack Overflow\n");
    }
    else{
        top++;
        stack[top] = data;
        printf("%d is pushed sucessfully at %d position\n",stack[top], top);
    }
}

int pop(){
    if(isempty())
    {
        printf("Stack Underflow\n");
    }
    else{
        printf("%d is popped successfully at %d position\n ",stack[top], top);
        top--;
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7); 

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    int i =0;
    for(i = 0; i < size-1; i++)
    {
        printf("%d ", stack[i]);
    }
}