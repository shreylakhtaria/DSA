#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node* next;
    
};
// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct Node** head, int newData)
{
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    
    // Update the head pointer
    *head = newNode;
}

// Function to print the linked list
void printList(struct Node* head)
{
    struct Node* current = head;
    
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }   
    printf("\n");
}

int main()
{
    struct Node* head = NULL;
    
    // Insert nodes at the beginning of the linked list
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);
    
    // Print the linked list
    printList(head);
    
    return 0;
}