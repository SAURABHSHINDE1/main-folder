#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct stack{
    int top;
    int size;
    char *a;    
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

int push(struct stack* s, char data){
    if(isfull(s)){
        printf("Stack Overflow\n");
    }
    else{
        s->top ++;
        s->a[s->top] = data;
        printf("\nThe elememt pushed \n");
    }
}

int pop(struct stack*s)
{
    if(isempty(s))
    {
        printf("Stack Underflow\n");
    }
    else{
       char val= s->a[s->top] = 0;
        s->top --;
        printf("\n %c is popped\n", s->a[s->top]);
        return val;
    }
}


int precidance(char var)
{
    if(var == '*' || var == '/')
    {
        return 2;
    }
    else if(var == '+' || var == '-')
    {
        return 1;
    }
    else{
        return 0;
    }
}

char top(struct stack *s)
{
    return s->a[s->top];
}

char* infix_to_postfix(char infix[])
{
    struct stack *s = (struct stack*) malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 20;
    s->a =(char*)malloc(s->size*sizeof(char));
    char* postfix = (char*)malloc(strlen(infix)* sizeof(char));

    int i=0 ,j=0;
    while( infix[i] != '\0' )
    {
        if(infix[i] != '+' && infix[i] != '-' && infix[i] != '*' && infix[i] != '/')
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else 
        {
            if(precidance(infix[i]) > precidance(top(s)))
            {
                push(s,infix[i]);
                i++;
            }
            else{
                postfix[j] = pop(s);
                j++;
            }
        }
        
    }

    while(!isempty(s))
    {
        postfix[j] = top(s);
        j++;
    }

    postfix[j] = '\0';

    return postfix;
}

int main()
{
    char infix[]="a+b/c-d";
    printf("%s", infix_to_postfix(infix));
}