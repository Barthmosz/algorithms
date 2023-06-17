#include "Stack.hpp"

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    
    cout << "\nTop element is " << stack.peek() << endl;
    stack.pop();
    stack.display();
    cout << "\nTop element is " << stack.peek() << endl;

    return 0;
}
