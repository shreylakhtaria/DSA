#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertAtbeginning(struct Node **head, int value) {
    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;

    // Make the new node the head
    *head = newNode;
}


struct Node* reverseList(struct Node* head) {
    struct Node* prev = NULL; // null pointer 
    struct Node* curr = head; // current pointer directed to head 
    struct Node* next = NULL; // null pointer

    while (curr != NULL) 
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // head = prev;
    return prev;
}

void Display(struct Node *head) 
{
    struct Node *temp = head;
    while (temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node *head = NULL;

    // Insert nodes at the beginning of the list
    insertAtbeginning(&head, 5);
    insertAtbeginning(&head, 4);
    insertAtbeginning(&head, 3);
    insertAtbeginning(&head, 2);
    insertAtbeginning(&head, 1);

    printf("Original List: ");
    Display(head);

    // Reverse the linked list
    head = reverseList(head);
    
    printf("Reversed List: ");
    Display(head);

    return 0;
}
