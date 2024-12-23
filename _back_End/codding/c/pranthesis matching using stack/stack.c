#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int size;
    int top;
    char *a;
};


int isfull(struct stack *s)
{
    if(s->top == s->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(struct stack *s){
    if( s->top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}


void push(char data,struct stack *s)
{
    if(isfull(s))
    {
        printf("Stack Overflow\n");
    }
    else{
        s->top++;
        s->a[s->top]= data;
        printf("%c is pushed sucessfully at %d position\n",s->a[s->top], s->top);
    }
}


void pop(struct stack *s){
    if(isempty(s))
    {
        printf("Stack Underflow\n");
    }
    else{
        printf("%c is popped successfully at %d position\n ",s->a[s->top], s->top);
        s->top--;
    }
}

int parenthesis_matching(char eq[]){
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    int length = strlen(eq);
    s->size = length;
    s->top = -1;
    s->a = (char*)malloc(length*sizeof(char));
    int i;
    for(i=0;eq[i]!='\0';i++)
    {
       if(eq[i]=='(') 
       {
        push(eq[i],s);
       }
       else if(eq[i]==')')
       {
        if(isempty(s))
        {
            return 0;
        }
        else
        {
            pop(s);
        }
       }
    }
    if(s->top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }

}


int main(){

 char eq[] = "(a+b)*(c+d)";

   int result =  parenthesis_matching(eq);
   if(result == 1)
   {
    printf("Parenthesis are balanced\n");
   }
   else{
    printf("Parenthesis are not balanced\n");
   }
   return 0;
}