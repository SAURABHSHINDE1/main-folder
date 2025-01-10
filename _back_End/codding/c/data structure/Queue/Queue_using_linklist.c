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
         ptr->data = data;
         ptr->next = *f;
         *f = ptr;
    }


    if (*r == NULL) {
        *r = ptr; 
    }

     printf("%d is Enqueue successfully\n",ptr->data);
}


void dequeue_rear(struct node **f, struct node **r)
{
    if(isempty(r))
    {
        printf("The Queue is Underflow");

    }

    struct node *temp = *f;

     if(*f == *r)
    {
        // struct node *temp = *f;
        free(*r);
         printf("%d Dequeue successfully\n",(*f)->data);
        *r = NULL;
        *f = NULL;
    }
    
}

int main()
{
    struct node *f=NULL;
    struct node *r=NULL;

    enqueue_front(&f,&r,20);
    // enqueue_front(&f,&r,30);
    // enqueue_front(&f,&r,40);
    // enqueue_front(&f,&r,50);
     print(f);
    dequeue_rear(&f,&r);
     print(f);
}