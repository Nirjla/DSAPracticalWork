#include <iostream>
using namespace std;

class SinglyLinkedList {
public:
    struct Node {
        int data;
        Node* next;
    };

    Node* start;

    SinglyLinkedList() {
        start = nullptr;
    }

    // Function to insert element at the beginning
    void insertAtBeginning(int x) {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = start;
        start = newNode;
    }

    // Function to insert element at the end
    void insertAtEnd(int x) {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = nullptr;

        if (start == nullptr) {
            start = newNode;
        } else {
            Node* current = start;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to display the linked list
    void display() {
        if (start == nullptr) {
            cout << "Singly Linked List is empty." << endl;
        } else {
            cout << "Singly Linked List: ";
            Node* current = start;
            while (current != nullptr) {
                cout << current->data << " -> ";
                current = current->next;
            }
            cout << "nullptr" << endl;
        }
    }
};

int main() {
    SinglyLinkedList s;
    int ch = 1;
    int x;

    while (ch != 0) {
        cout << "\n\nSingly Linked List Operations:\n";
        cout << "1. Insert at the beginning\n";
        cout << "2. Insert at the end\n";
        cout << "3. Display\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter the value: ";
                cin >> x;
                s.insertAtBeginning(x);
                s.display();
                break;
            case 2:
                cout << "Enter the value: ";
                cin >> x;
                s.insertAtEnd(x);
                s.display();
                break;
            case 3:
                s.display();
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}