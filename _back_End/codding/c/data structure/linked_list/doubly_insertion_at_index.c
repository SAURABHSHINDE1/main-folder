#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

void print_linklist(struct node *head) {
    struct node *p = head;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
  printf("\n");
}
struct node *insertion_at_first(struct node *head, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node)); 
        ptr->data = data;
        ptr->next = head;
        ptr->prev = NULL;
        head = ptr;
    return head; 
}

struct node *insertion_at_index(struct node *head, int index)
{
    struct node *p = head;
    struct node *ptr =(struct node*) malloc(sizeof(struct node));
    int i = 0 ;
    while( i != index -1 )
    {
       p = p -> next ;
       i++;
    }

    ptr -> next = p -> next;
    ptr -> data = 77;
    ptr -> prev = p ;
    p -> next  = ptr;

    return head;
}


int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;
    head->prev = NULL;

    second->data = 20;
    second->next = third;
    second->prev = head;

    third->data = 30;
    third->next = fourth;
    third->prev = second;

    fourth->data = 40;
    fourth->next = NULL;
    fourth->prev = third;

    insertion_at_index(head,2);
    print_linklist(head);
    insertion_at_index(head,1);
    print_linklist(head);


    return 0;
}