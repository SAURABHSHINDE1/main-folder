#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void print_linklist(struct node *head){
    struct node *ptr = head;

    do{
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }while(ptr != head);
}


void reverse_linklist( struct node *fourth)
{
    struct node *p = fourth;
  do{
     printf("%d ", p -> data);
     p = p -> prev;
  }while(p != fourth);

}

int main()
{
    struct node *head = (struct node*) malloc (sizeof(struct node));
    struct node *second = (struct node*) malloc (sizeof(struct node));
    struct node *third = (struct node*) malloc (sizeof(struct node));
    struct node *fourth = (struct node*) malloc (sizeof(struct node));

    head -> data = 10;
    head -> next = second;
    head -> prev = fourth;

    second -> data = 20;
    second -> next = third;
    second -> prev = head;

    third -> data = 30;
    third -> next = fourth;
    third -> prev = second;

    fourth -> data = 40;
    fourth -> next = head;
    fourth -> prev = third;

    printf(" Original list:");
    print_linklist(head);

     printf("\nReversed Linked List: ");
     reverse_linklist(fourth);

}