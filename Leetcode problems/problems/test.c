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

    while (head != NULL && head->val == val) {
        struct node* temp = head; 
        head = head->next;           
        free(temp);                  
    }


    if(head == NULL)
    {
        return NULL;
    }

    struct node *curr= head;
    while(curr != NULL && curr->next != NULL)
    {
        if(curr->next->val == val)
        {
            struct node *temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        }
        else{
            curr=curr->next;
        }
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

