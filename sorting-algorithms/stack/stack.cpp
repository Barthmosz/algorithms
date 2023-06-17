#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

class Stack {
    public:
        Node* top;
        Stack() { top = NULL; }

        void push(int element) {
            Node* node = new Node;
            if (!node) {
                cout << "\nHeap Overflow";
                exit(1);
            }
            node->data = element;
            node->next = top;
            top = node;
        }

        bool isEmpty() {
            return top == NULL;
        }

        void display() {
            Node* temp;
            if (top == NULL) {
                cout << "\nStack Underflow";
                exit(1);
            } else {
                temp = top;
                while (temp != NULL) {
                    cout << temp->data << "-> ";
                    temp = temp->next;
                }
            }
        }
};

int main() {
    Stack stack;
    return 0;
}
