#include<stdio.h>
#include<stdlib.h>

struct node{
    char data;
    struct node *next;
};

void print_linked_list(struct node *ptr)
{
    while( ptr != NULL)
    {
        printf( "%c ", ptr -> data );
        ptr = ptr -> next;
    }
}
int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));

    struct node *second=(struct node*)malloc(sizeof(struct node));

    struct node *third=(struct node*)malloc(sizeof(struct node));

    struct node *fourth=(struct node*)malloc(sizeof(struct node));

    struct node *fifth=(struct node*)malloc(sizeof(struct node));

    struct node *sixth=(struct node*)malloc(sizeof(struct node));

    struct node *seventh=(struct node*)malloc(sizeof(struct node));
    

    head -> data ='s';
    head -> next = second;

    second -> data = 'a';
    second -> next = third;
    
    third -> data ='u';
    third -> next = fourth;

    fourth -> data ='r';
    fourth -> next = fifth;

    fifth -> data ='a';
    fifth -> next = sixth;

    sixth -> data ='b';
    sixth -> next = seventh;

    seventh -> data ='h';
    seventh -> next = NULL;

    print_linked_list(head);
}