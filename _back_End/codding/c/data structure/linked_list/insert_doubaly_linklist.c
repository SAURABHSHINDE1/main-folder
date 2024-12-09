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

struct node *insertion_linklist(struct node *head, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node)); 
    ptr->data = data;
    ptr->next = head; 
    ptr->prev = NULL; 


    if (head != NULL) {
        head->prev = ptr; 
    }

    return ptr; 
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

    // Insert a new node with data 5 at the beginning
    head = insertion_linklist(head, 5);
    print_linklist(head);


    return 0;
}