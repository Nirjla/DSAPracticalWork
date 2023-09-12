#include <iostream>
#include <stdio.h>

using namespace std;

#define MAX 5

class cir_queue
{
    int cq_arr[MAX];
    int front, rear;

public:
    cir_queue()
    {
        front = -1;
        rear = -1;
    }

    void insert();
    void del();
    void display();
};

void cir_queue::insert()
{
    int add_item;
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        cout << "\n Queue overflow\n";
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == MAX - 1)
        {
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
    }

    cout << "\n input the element for insertion\n";
    cin >> add_item;
    cq_arr[rear] = add_item;
}

void cir_queue::del()
{
    if (front == -1)
    {
        cout << "\nQueue underflow\n";
        return;
    }
    cout << "\n element deleted from queue is " << cq_arr[front] << "\n";
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == MAX - 1)
    {
        front = 0;
    }
    else
    {
        front = front + 1;
    }
}

void cir_queue::display()
{
    int front_pos = front, rear_pos = rear;
    if (front == -1)
    {
        cout << "\n Queue is empty\n";
        return;
    }
    cout << "\n Queue elements: ";
    if (front_pos <= rear_pos)
    {
        while (front_pos <= rear_pos)
        {
            cout << cq_arr[front_pos] << ",";
            front_pos++;
        }
    }
    else
    {
        while (front_pos <= MAX - 1)
        {
            cout << cq_arr[front_pos] << ",";
            front_pos++;
        }
        front_pos = 0;
        while (front_pos <= rear_pos)
        {
            cout << cq_arr[front_pos] << ",";
            front_pos++;
        }
    }
    cout << "\n";
}

int main()
{
    cir_queue cq;
    int ch = 0;
    while (ch != 4)
    {
        cout << "\n1-Insert\n2-Delete\n3-Display\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cq.insert();
            break;
        case 2:
            cq.del();
            break;
        case 3:
            cq.display();
            break;
        default:
            cout << "Invalid choice\n";
        }
    }
    return 0;
}