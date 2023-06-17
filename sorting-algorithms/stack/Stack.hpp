#include <iostream>
using namespace std;

enum ExitCodes {
    STACK_UNDERFLOW = 1,
    HEAP_OVERFLOW = 2
};

class Node {
    public:
        int data;
        Node* next;
};

class Stack {
    public:
        Node* top;
        Stack();
        
        void push(int element);
        void pop();
        int peek();
        bool isEmpty();
        void display();
};
