//Author : Shrey Lakhtariax
#include <iostream>
using namespace std;

int top = -1; // Initially stack is empty
int stack[5]; // Stack of size 5

void push(int data)
{
    if (top == 5)
    {
        cout << "Stack is full" << endl;
        return;
    }
    stack[top++] = data;
}

void pop()
{
    if (top == 0)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    top--;
}

void peek()
{
    if (top == 0)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << stack[top - 1] << endl;
    pop(); // Remove the element after peeking
}

void display()
{
    if (top == 0)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    for (int i = top - 1; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }
    cout << endl;
}


int main()
{
    top = 0;
    int choice;
    cout << "Enter the operation you want to perform" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Peek" << endl;
    cout << "4. Display" << endl;
    cout << "5. Exit" << endl;

    do
    {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                int data;
                cout << "Enter the data you want to push: ";
                cin >> data;
                push(data);
                break;
            case 2:
                pop();
                cout << "Element popped Is : " << stack[top] << endl;
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}