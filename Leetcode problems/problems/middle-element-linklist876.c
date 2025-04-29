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

struct Node* middleNode(struct ListNode* head) {
        struct node* slow = head;
        struct node* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
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

    struct node* mid=middleNode(head);
    printf("Middle element is: %d\n", mid->val);

    return 0;

}

