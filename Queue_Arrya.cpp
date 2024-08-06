#include <iostream>
using namespace std;

int queue[10], n = 10, front = - 1, rear = - 1;

void enqueue(int val) {
   if(rear == n - 1)
      cout<<"Queue Overflow"<<endl;
   else {
      if(front == - 1)
        front = 0;
      rear++;
      queue[rear] = val;
   }
}

void dequeue() 
{
   if(front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}

void peek() {
   if(front == - 1)
      cout<<"Queue is empty"<<endl;
   else
      cout<<"Queue elements are:"<<endl;
      for(int i = front; i <= rear; i++)
         cout<<queue[i]<<" ";
      cout<<endl;
}

void display() {
   if(front == - 1)
      cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are:"<<endl;
      for(int i = front; i <= rear; i++)
         cout<<queue[i]<<" ";
      cout<<endl;
   }
}

int main ()
{
    int ch, val;
    cout<<"1) Enqueue in queue"<<endl;
    cout<<"2) Dequeue from queue"<<endl;
    cout<<"3) Peek queue"<<endl;
    cout<<"4) Display queue"<<endl;
    cout<<"5) Exit"<<endl;
    do {
        cout<<"Enter choice: "<<endl;
        cin>>ch;
        switch(ch) {
            case 1: 
            {
                cout<<"Enter value to be pushed:"<<endl;
                cin>>val;
                enqueue(val);
                break;
            }
            case 2: 
            {
                dequeue();
                break;
            }
            case 3: 
            {
                peek();
                break;
            }
            case 4: 
            {
                display();
                break;
            }
            case 5: 
            {
                cout<<"Exit"<<endl;
                break;
            }
            default: 
            {
                cout<<"Invalid Choice"<<endl;
            }
        }
    } while(ch != 5);
    return 0;
}