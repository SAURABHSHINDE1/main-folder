#include<stdio.h>
#include<stdlib.h>
struct node{
    float data;
    struct node *next;
};

int main()
{
    struct node *head = (struct node*) malloc (sizeof(struct node));

    struct node *second = (struct node*) malloc (sizeof(struct node));

    struct node *third = (struct node*) malloc (sizeof(struct node));
    
    struct node *fourth = (struct node*) malloc (sizeof(struct node));

    head -> data = 10.34;
    head -> next = second;

    second -> data = 13.45;
    second -> next = third;

    third -> data =14.45;
    third -> next = fourth;

    fourth -> data =98.3;
    fourth -> next = NULL;

    struct node *ptr = head;
    while( ptr != NULL)
    {
        printf("%0.2f ", ptr -> data);
        ptr = ptr -> next;
    }


}