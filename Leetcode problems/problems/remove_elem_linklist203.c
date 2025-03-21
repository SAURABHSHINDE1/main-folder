#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *next;
};

void print_linked_list(struct node *saurabh)
{
    struct node *ptr = saurabh;
    while(ptr != NULL)
    {
        printf("%d ", ptr -> val);
        ptr = ptr -> next;
    }
}


struct node* deletion_at_value(struct node *head , int val)
{
    struct node *p = head;
    struct node *q = head -> next;

    while(q->val != val && q -> next != NULL)
    {
        p = p -> next;
        q = q -> next;
    }

    if(q -> val == val )
    {
         p -> next = q -> next;
        free(q);
    }
    else{
        printf("Value not found in the linked list\n");
    }

    return head;

}
int main()
{
    struct node *head=(struct node*) malloc (sizeof(struct node));
    struct node *second=(struct node*) malloc (sizeof(struct node));
    struct node *third=(struct node*) malloc (sizeof(struct node));
    struct node *fourth=(struct node*) malloc (sizeof(struct node));

    head -> val = 72 ;
    head -> next = second;

    second -> val = 78 ;
    second -> next = third;

    third -> val =72;
    third -> next = fourth;

    fourth -> val = 78 ;
    fourth -> next = NULL;



    head=deletion_at_value(head,78);
    print_linked_list(head);

    return 0;

}

