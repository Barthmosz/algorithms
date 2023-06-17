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

        void pop() {
            Node* node;
            if (top == NULL) {
                cout << "\nStack Underflow" << endl;
                exit(1);
            } else {
                node = top;
                top = top->next;
                node->next = NULL;
                delete node;
            }
        }

        bool isEmpty() {
            return top == NULL;
        }

        int peek() {
            if (!isEmpty()) {
                return top->data;
            } else {
                exit(1);
            }
        }

        void display() {
            Node* temp;
            if (top == NULL) {
                cout << "\nStack Underflow";
                exit(1);
            } else {
                temp = top;
                while (temp != NULL) {
                    if (temp->next != NULL) {
                        cout << temp->data << "->";
                    }
                    else {
                        cout << temp->data;
                    }
                    temp = temp->next;
                }
            }
        }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    return 0;
}
