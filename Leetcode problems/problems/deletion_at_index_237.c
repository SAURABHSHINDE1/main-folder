#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

void deleteNode(struct ListNode* node) {
    if (node == NULL || node->next == NULL) return;  
    

    node->val = node->next->val;
 
    struct ListNode* temp = node->next;
    node->next = node->next->next;

    free(temp);
}

// Utility function to print linked list
void printList(struct ListNode* head) {
    while (head) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

// Utility function to create a new node
struct ListNode* newNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

// Example usage
int main() {
    struct ListNode* head = newNode(4);
    head->next = newNode(5);
    head->next->next = newNode(1);
    head->next->next->next = newNode(9);

    printf("Original List: ");
    printList(head);

    // Delete node 5 (head->next)
    deleteNode(head->next);

    printf("After Deletion: ");
    printList(head);

    return 0;
}
