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

void enquque(struct node **f, struct node**r, int data)
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

void dequeue(struct node **f, struct node **r)
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
int main()
{
    struct node *f=NULL;
    struct node *r=NULL;

     enquque(&f,&r,10);
     enquque(&f,&r,20);
     enquque(&f,&r,30);
     enquque(&f,&r,40);
     print(f);
     dequeue(&f,&r);
     dequeue(&f,&r);
     dequeue(&f,&r);
     print(f);
    
}