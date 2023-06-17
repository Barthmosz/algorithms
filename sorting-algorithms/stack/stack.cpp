#include "Stack.hpp"

Stack::Stack() {
    top = NULL;
}

void Stack::push(int element) {
    try {
        Node* node = new Node;
        node->data = element;
        node->next = top;
        top = node;
    } catch (bad_alloc& ba) {
        cout << "\nHeap Overflow: " << ba.what();
        exit(HEAP_OVERFLOW);
    }
}

void Stack::pop() {
    Node* node;
    if (top == NULL) {
        cout << "\nStack Underflow" << endl;
        exit(STACK_UNDERFLOW);
    } else {
        node = top;
        top = top->next;
        node->next = NULL;
        delete node;
    }
}

int Stack::peek() {
    if (!isEmpty()) {
        return top->data;
    } else {
        exit(STACK_UNDERFLOW);
    }
}

bool Stack::isEmpty() {
    return top == NULL;
}

void Stack::display() {
    Node* node;
    if (top == NULL) {
        cout << "\nStack Underflow";
        exit(STACK_UNDERFLOW);
    } else {
        node = top;
        while (node != NULL) {
            if (node-> next == NULL) {
                cout << node->data;
            } else {
                cout << node->data << "->";
            }
            node = node->next;
        }
    }
}
