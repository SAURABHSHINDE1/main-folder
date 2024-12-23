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
    printf("\n"); // For better output formatting
}
void print_reverse(struct node* fourth , struct node *head)
{
    struct node *p = fourth;
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p -> prev;
    }
}

struct node *insertion_at_given_node(struct node *head, struct node *ptr , int data) 
{

    struct node *n =(struct node*) malloc (sizeof(struct node));
    n -> data = data;
    struct node *p = head;
    struct node *q =head->next;
    while(p != ptr)
    {
        p = p -> next;
        q = p -> next;
    }
    n-> next = q;
    n -> prev =p;
    p -> next = n;
    q -> prev = n;
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

    
    head = insertion_at_given_node(head,second,55);
    print_linklist(head);
    print_reverse(fourth,head);


    return 0;
}