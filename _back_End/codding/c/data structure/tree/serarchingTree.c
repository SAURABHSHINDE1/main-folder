#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *newnode = (struct node*) malloc (sizeof(struct node));
    newnode -> data = data;
    newnode ->left = NULL;
    newnode ->right = NULL;

    return newnode;
}

void inorder (struct node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int search(struct node *root, int key)
{
    if(root != NULL)
    {
        if(root ->data == key)
        {
            return 1;
        }
        else if(root -> data < key)
        {
            search(root ->right,key);
        }
        else{
            search(root -> left, key);
        }
    }
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

    p1 -> left = p2;
    p1 ->right =p3;
    p2 -> left =p4;
    p2 -> right =p5;
    p3 -> left = p6;
    p3 -> right = p7;

    int key;
    printf("Enter the value to search:");
    scanf("%d",&key);

    int result = search(p1,key);
    if(result == 1)
    {
        printf("%d is found\n",key);
    }
    else{
        printf("%d is not found\n",key);
    }

    inorder(p1);
}