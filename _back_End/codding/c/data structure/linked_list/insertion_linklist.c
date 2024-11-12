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

struct node *insertion_linklist( struct node *head, int data){

    struct node *ptr = (struct node *) malloc (sizeof (struct node));

    ptr -> data = data;
    ptr -> next = head;

    return ptr;

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
    head = insertion_linklist(head ,10);
    print_linked_list(head);

    return 0;

}

