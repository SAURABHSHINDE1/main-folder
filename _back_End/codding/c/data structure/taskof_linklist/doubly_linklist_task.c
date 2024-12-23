#include<stdio.h>
#include<stdlib.h>
struct  node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node* insertelement(struct node** head, int data){
    struct node *newnode =(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    if(*head == NULL){
        *head = newnode;
        newnode ->next = NULL;
        newnode ->prev = NULL;
    }
    else{
        struct node *last = *head;
        while(last -> next != NULL)
        {
            last = last -> next;
        }
        last -> next = newnode;
        newnode -> prev = last;
        newnode -> next = NULL;
    }

}

void display(struct node *head){
    while(head!=NULL){
        printf(" %d ",head->data);
        head = head->next;
    }

}

void search(struct node *head , int target){
   while(head!=NULL){
    if(head->data == target){
        printf("Element found %d\n",target);
        return;
    }
    head = head->next;

   }
    printf("Element not found\n");
}
int main(){
    int i,n,data;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    struct node *head = NULL;
   for(i =0; i< n; i++)
   {
        printf("Enter the elements of node %d:-",i);
        scanf("%d",&data);
        insertelement(&head, data);
   }
   display(head);
    printf("\nEnter the number to search:");
    int target;
    scanf("%d",&target);
    search(head,target);
    
}