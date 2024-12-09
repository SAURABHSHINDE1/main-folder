#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void print_linklist( struct node * head)
{
    struct node *p = head;
    do{
        printf("%d ",p->data);
        p = p -> next;
    }while(p != head);
}

int main()
{
    struct node *head = (struct node*) malloc (sizeof(struct node));
    struct node *second = (struct node*) malloc (sizeof(struct node));
    struct node *third = (struct node*) malloc (sizeof(struct node));
    struct node *fourth = (struct node*) malloc (sizeof(struct node));

    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = fourth;

    fourth -> data = 40;
    fourth -> next = head;

     print_linklist(head);

}