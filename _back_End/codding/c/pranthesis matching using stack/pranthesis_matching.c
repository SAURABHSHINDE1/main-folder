#include<stdio.h>
#include<stdlib.h>
char arr[20];
int size = 20;
int top=-1;
int isfull(){
    if(top==size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(char data){
    if(isfull()){
        printf("Stack is full\n");
    }
    else{
        top++;
        arr[top]=data;
        printf("%c pushed successfully\n",arr[top]);
    }
}
void pop(){
    if(isempty()){
        printf("Stack is empty\n");
    }
    else{
        char data=arr[top];
        top--;
        printf("%c is popped successfully\n",data);
    }
}
int parenthesisMatching(char eq[]){
    int i;
    for(i=0;eq[i]!='\0';i++){
        if(eq[i]=='('){
            push(eq[i]);
        }
        else if(eq[i]==')'){
            if(isempty()){
                return 0;
            }
             else{
                 pop();
             }

        }
    }
        if(isempty()){
            return 1;
        }
        else{
            return 0;
        }
        
    }

int main(){
    char eq[]="(a+b)+(c+d))";
    int result=parenthesisMatching(eq);
    if(result==1){
        printf("Parenthesis are matching\n");
    }
    else{
        printf("Parenthesis are not matching\n");
    }

    return 0;
}
