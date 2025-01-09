#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int f;
    int r;
    int size;
    int *a;
};

int isempty(struct Queue *s)
{
    if(s->f == s->r)
    {
        return 1;
    }
    else{
        return 0;
    }
} 

int isfull(struct Queue *s)
{
    if(s->r == s->size -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct Queue *s, int data)
{
    if(isfull(s))
    {
        printf("\nQueue Overflow !\n");
    }
    else{
        s->r++;
        s->a[s->r]= data;
        printf("%d Enqueue Successfully !\n",data);
    }
}

void Dequeue(struct Queue *s)
{
    if(isempty(s))
    {
        printf("\nQueue is Underflow !\n");
    }
    else{
        s->f++;
        int val = s->a[s->f];
        s->a[s->f]= 0;
        printf("%d Dequeue Successfully !\n",val);
    }
}

int main()
{
    struct Queue s;
    s.f = -1;
    s.r= -1;
    s.size=3;
    s.a=(int*)malloc(s.size*sizeof(int));

    enqueue(&s,10);   
    enqueue(&s,20);   
    enqueue(&s,30);   
    enqueue(&s,40);   
    Dequeue(&s);
    Dequeue(&s);
    Dequeue(&s);
    Dequeue(&s);
}