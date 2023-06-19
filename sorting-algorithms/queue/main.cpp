#include "Queue.hpp"

int main() {
    Queue queue = Queue(3);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.display();

    cout << "Is full: " << queue.isFull() << endl;
    cout << "Is Empty: " << queue.isEmpty() << endl;
    cout << "Size: " << queue.size() << endl;

    queue.dequeue();
    queue.dequeue();
    queue.dequeue();

    cout << "Is full: " << queue.isFull() << endl;
    cout << "Is Empty: " << queue.isEmpty() << endl;
    cout << "Size: " << queue.size() << endl;

    return 0;
}
