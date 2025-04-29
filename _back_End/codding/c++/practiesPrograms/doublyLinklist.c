#include<stdio.h>
#include<stdlib.h>
struct  node{
    int data;
    struct node *left;
    struct node *right;    
};

void inorder(struct node *root)
{
    if(root != NULL)
    {
        inorder(root -> left);
        printf("%d ",root->data);
        inorder(root ->right);
    }
}

void preorder(struct node *root)
{
    if(root != NULL)
    {
        printf("%d ",root->data);
        preorder(root -> left);
        preorder(root ->right);
    }

}

void postorder(struct node *root)
{
    if(root != NULL)
    {
        postorder(root -> left);
        postorder(root ->right);
        printf("%d ",root->data);
    }
}

struct node *createnode(int data)
{
    struct node *newnode =(struct node*) malloc (sizeof(struct node));
    newnode -> data = data;
    newnode ->left =NULL;
    newnode -> right = NULL;
    return newnode;
}



int main()
{
    struct node *p1 = createnode(5);
    struct node *p2 = createnode(3);
    struct node *p3 = createnode(7);
    struct node *p4 = createnode(1);
    struct node *p5 = createnode(4);
    struct node *p6 = createnode(6);
    struct node *p7 = createnode(9);
    

    p1 -> left =p2;
    p1 -> right =p3;
    p2 ->left =p4;
    p2 -> right =p5;
    p3 -> left =p6;
    p3 -> right =p7;

    printf("Inorder List \n");
    inorder(p1);
    printf("\nPreorder List \n");
    preorder(p1);
    printf("\nPostorder List \n");
    postorder(p1);

}