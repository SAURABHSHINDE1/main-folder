#include<stdio.h>
#include<stdlib.h>
struct node {           
    int data;
    struct node *next;
};
void print(struct node *ptr)
{
   while(ptr != NULL)
   {
    printf("%d ",ptr->data);
    ptr = ptr->next;
   }
}
struct node* create_node(struct node** head,int data)
{
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    if(*head == NULL)
    {
        *head = n;
        n->next = NULL;
    }
    else{
        struct node* p = *head;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = n;
        n->next = NULL;
    }
    //  return head;
}
int main()
{
    struct node* head = NULL;
    int n,data,i;
    printf("Enter the value of nodes: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the data of node %d: ",i);
        scanf("%d",&data);
        create_node(&head,data);
    }
    print(head);
    return 0;
}