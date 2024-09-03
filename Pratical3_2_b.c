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

void Checkpalindrome(struct Node* head)
{ 

      

}