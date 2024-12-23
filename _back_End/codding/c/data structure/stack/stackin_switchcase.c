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

void push( struct stack* s){
    if(isfull(s)){

        printf("Stack Overflow\n");
    }
    else{
        int data;
        printf("Enter the value to push: ");
        scanf("%d", &data);
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
void  peek(struct stack *s)
{
    int index;
    printf("Enter the index:-");
    scanf("%d",&index);
    printf("The index value is :-%d", s->a[s->top]);
}

void display(struct stack *s){
    int i;
    if(isempty(s)){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements are: \n");
        for(i = s->top; i >= 0; i--){
            printf("%d \n", s->a[i]);
        }
    }
}

int main(){

    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    s->size = 7;
    s->a =(int*) malloc(s->size * sizeof(int));
    s->top = -1;



   
   int choose;
        printf("select operation:----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        

    while(1){
        printf("\nEnter your choice:-");
        scanf("%d",&choose);
        switch(choose){

            case 1:
                push(s);
                break;

            case 2:
            pop(s);
            break;


            case 3:
                
             peek(s);
             break;

            case 4:
             display(s);
            break;

            case 5:
             exit(0);

            default:
            printf("Invalid option\n");
            break;
        }
    }
}