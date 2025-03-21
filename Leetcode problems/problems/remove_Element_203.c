#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {
    
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* curr = &dummy;
    
    while (curr->next != NULL) {
        if (curr->next->val == val) {
            struct ListNode* temp = curr->next;
            curr->next = curr->next->next;
            free(temp); 
        } else {
            curr = curr->next;
        }
    }
    
    return dummy.next;
}

struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Helper function to print the linked list
void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

// Main function to test the removeElements function
int main() {
    // Creating a sample linked list: 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
    struct ListNode* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(6);
    head->next->next->next = createNode(3);
    head->next->next->next->next = createNode(4);
    head->next->next->next->next->next = createNode(5);
    head->next->next->next->next->next->next = createNode(6);
    
    printf("Original list: ");
    printList(head);
    
    // Removing elements with value 6
    head = removeElements(head, 6);
    
    printf("Modified list: ");
    printList(head);
    
    return 0;
}
