#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};


 void print_linklist(struct node *top){
    while(top != NULL){
        printf("%d ", top -> data);
        top = top -> next;
    }
 }

 int isempty( struct node *top ){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
 }

 int isfull( struct node *top ){
    struct node *p = (struct node*) malloc(sizeof(struct node));
    
  
    if(p == NULL)
        return 1;
    else
        return 0;
}

 struct node* push(struct node *top ,int data){
   
    
    if(isfull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct node *ptr = (struct node*) malloc (sizeof(struct node));
        ptr -> data = data;
        ptr -> next = top;
        top = ptr;
        printf("%d pushed to the stack\n", top->data);
    }
    return top;
 }

 struct node* pop(struct node *top){
    if(isempty(top)){
        printf("Stack Underflow\n");
    }
    else{
        struct node *temp = top;
        int val = top->data;
        top = temp->next;
        free(temp);
        printf("%d popped from the stack\n", val);
    }

    return top;
 }

int main(){

    struct node *top =NULL;

   top = push(top,33);
   top = push(top,77);
   top = push(top,66);
   top = push(top,88);
   top = push(top,99);
   top = push(top,55);
   top = push(top,33);
   print_linklist(top);
 
}