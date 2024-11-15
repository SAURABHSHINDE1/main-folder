#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void print_linked_list(struct node *saurabh)
{
    struct node *ptr = saurabh;
    while(ptr != NULL)
    {
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
}

struct node *deletion_at_last(struct node *head)
{
    struct node *p = head;
    struct node *q = head -> next;
    while( q -> next != NULL)
    {
        p = p -> next;
        q = q -> next;
    }

    p -> next = q -> next;
    free(q);
    return head;
}

int main()
{
    struct node *head=(struct node*) malloc (sizeof(struct node));
    struct node *second=(struct node*) malloc (sizeof(struct node));
    struct node *third=(struct node*) malloc (sizeof(struct node));
    struct node *fourth=(struct node*) malloc (sizeof(struct node));

    head -> data = 12 ;
    head -> next = second;

    second -> data = 25 ;
    second -> next = third;

    third -> data = 36 ;
    third -> next = fourth;

    fourth -> data = 49 ;
    fourth -> next = NULL;


    print_linked_list(head);
    printf("\n");
    head=deletion_at_last(head);
    print_linked_list(head);

    return 0;

}

