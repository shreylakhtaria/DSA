#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to insert a node at the beginning
void insertAtbeginning(struct Node **head, int value)
{
    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;

    // Make the new node the head
    *head = newNode;
}

// Function to insert a node at the end
void insertAtEnd(struct Node **head, int value)
{
    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    // If the list is empty, make the new node the head
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // Traverse to the last node
    struct Node *current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    // Append the new node to the end
    current->next = newNode;
}

// Function to delete a node from the beginning
void deletionfrombeginning(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Function to delete a node from the end
void deletionfromtheend(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        return;
    }

    struct Node *second_last = *head;
    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }
    free(second_last->next);
    second_last->next = NULL;
}

// Function to insert a node at a specific position
void addingnodeinbetween(struct Node **head)
{
    int position, value;
    printf("Enter the position to insert: ");
    scanf("%d", &position);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node)); // Allocate memory for the new node
    newNode->data = value;                                             // input value to the new node

    // If the list is empty or position is 1, make the new node as the head
    if (*head == NULL || position == 1)
    {
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        // Traverse to the position -1 node
        struct Node *current = *head;
        for (int i = 1; i < position - 1 && current != NULL; i++)
        {
            current = current->next; // Move to the next node
        }

        // If position is greater than the length of the list, insert at the end
        if (current == NULL)
        {
            current->next = newNode; // Insert the new node at the end
        }
        else
        {
            // Insert the new node in between
            newNode->next = current->next; // Point the new node to the next node
            current->next = newNode;       // Point the current node to the new node
        }
    }
}

// Function to print the linked list
void printList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node *current = head;
    printf("Linked List: ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void removefrombetween(struct node ** head, int position)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = *head;
    if (position == 1)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        printf("Position does not exist\n");
        return;
    }
    struct Node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}


// Main function
int main()
{
    struct Node *head = NULL;

    int choice;
    do
    {
        printf("1. Insertion At Beginning\n");
        printf("2. Insertion At End\n");
        printf("3. Deletion From Beginning\n");
        printf("4. Deletion From End\n");
        printf("5. Insertion In Between\n");
        printf("6. Remove From Between\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int value;
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            insertAtbeginning(&head, value);
            printList(head);
            break;
        }

        case 2:
        {
            int value;
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            insertAtEnd(&head, value);
            printList(head);
            break;
        }

        case 3:
        {
            deletionfrombeginning(&head);
            printList(head);
            break;
        }

        case 4:
        {
            deletionfromtheend(&head);
            printList(head);
            break;
        }

        case 5:
        {
            addingnodeinbetween(&head);
            printList(head);
            break;
        }

        case 6:
        {
            int position;
            printf("Enter the position to remove: ");
            scanf("%d", &position);
            removefrombetween(&head, position);
            printList(head);
            break;
        }

        case 7:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice != 7);

    return 0;
}