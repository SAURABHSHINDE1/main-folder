#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void print_linklist( struct node * head)
{
    struct node *p = head;
   while(p != NULL)
   {
     printf("%d ", p -> data);
     p = p -> next;
   }
}

int main()
{
    struct node *head = (struct node*) malloc (sizeof(struct node));
    struct node *second = (struct node*) malloc (sizeof(struct node));
    struct node *third = (struct node*) malloc (sizeof(struct node));
    struct node *fourth = (struct node*) malloc (sizeof(struct node));

    head -> data = 10;
    head -> next = second;
    head -> prev = NULL;

    second -> data = 20;
    second -> next = third;
    second -> prev = head;

    third -> data = 30;
    third -> next = fourth;
    third -> prev = second;

    fourth -> data = 40;
    fourth -> next = NULL;
    fourth -> prev = third;

     print_linklist(head);

}