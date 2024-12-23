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

struct node* deletenode_at_first(struct node *head){
    struct node *p = head;
    head = head->next;
    head -> prev = NULL;
    free(p);
    return head;
}

void reverse_linklist(struct node *fourth)
{
    struct node *p = fourth;
    while(p!=NULL)
    {
        printf("%d ", p -> data);
        p = p -> prev;
    }

 
}


int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 20;
    head->next = second;
    head->prev = NULL;

    second->data = 70;
    second->next = third;
    second->prev = head;

    third->data = 77;
    third->next = fourth;
    third->prev = second;

    fourth->data = 99 ;
    fourth->next = NULL;
    fourth->prev = third;

    
    
    head=deletenode_at_first(head);
    print_linklist(head);
    
    reverse_linklist(fourth);


    


    return 0;
}