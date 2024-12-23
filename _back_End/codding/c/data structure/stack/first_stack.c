#include<stdio.h>
int arr[5];
int top = -1;
int size = sizeof(arr) / sizeof(arr[0]);

int isfull()
{
    if( top == size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isempty()
{
    if(top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(int data)
{
    if(isfull())
    {
        printf("Stack Overflow\n");
    }
    else{
        top ++;
        arr[top] = data;
        printf("%d  is pushed\n",arr[top]);
    }
}

void pop()
{
    if(isempty())
    {
        printf("Stack Underflow\n");
    }
    else{
        
        printf("\n%d is poped\n",arr[top]);
        arr[top] = 0;
        top --;
    }
}
int main()
{

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    printf("\n the array is :- \n");

    for(int i =0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }


    pop();
    pop();

    printf("\n after pop :- \n");

        for(int i =0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}