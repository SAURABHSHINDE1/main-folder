#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};



int isempty(struct node **r)
{
    if(r==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isfull()
{
    struct node *n =(struct node*) malloc(sizeof(struct node));

    if(n==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void enquque_rear(struct node **f, struct node**r, int data)
{
    struct node *ptr =(struct node*)malloc(sizeof(struct node));
    ptr->data= data;
    ptr->next= NULL;
    if(isfull())
    {
        printf("the Queue is overflow\n");
    }
    else if(*r==NULL)
    {
        *f=ptr;
        *r=ptr;
        
    }
    else{
    
        (*r)->next = ptr;
        *r = ptr;
        
    }
  printf("%d is Enqueue successfully\n",ptr->data);
}

void dequeue_front(struct node **f, struct node **r)
{
   if(isempty(r))
   {
     printf("The Queue is underflow\n");
   }
   else{
    struct node *temp =*f;
    *f = (*f)->next;
    printf("%d Dequeue successfully\n",temp->data);
    free(temp);
   }
}
void print(struct node* p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}

void enqueue_front(struct node **f,struct node **r, int data)
{
    struct node *ptr =(struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    if(isfull())
    {
        printf("The Queue is Overflow\n");
    }
    else{

    if (*r == NULL) {
        *r = ptr; 
        *f = ptr;
        (*f)->next = NULL;
    }
    else
    {
         ptr->next = *f;
         *f = ptr;
    }
    }


     printf("%d is Enqueue successfully\n",ptr->data);
}


void dequeue_rear(struct node **f, struct node **r)
{
    if(isempty(r))
    {
        printf("The Queue is Underflow");

    }
    else{
        struct node *temp = *f;
        while(temp -> next != *r)
        {
            temp = temp -> next;
        }
        int val = (*r)->data;
        free(r);
        *r = temp;
        (*r)->next = NULL;
        printf("%d Dequeue successfully\n",val);
    }  
}

int main()
{
    struct node *f=NULL;
    struct node *r=NULL;

    enqueue_front(&f,&r,20);
    enqueue_front(&f,&r,30);
    print(f);

     enquque_rear(&f,&r,77);
     enquque_rear(&f,&r,87);
     print(f);

     dequeue_front(&f,&r);
     print(f);

     dequeue_rear(&f,&r);
     print(f);
}