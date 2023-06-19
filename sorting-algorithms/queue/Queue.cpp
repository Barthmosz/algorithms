#include "Queue.hpp"

Queue::Queue(unsigned int capacity) {
    capacity = capacity;
    queue = new int[capacity];
    front = count = 0;
    rear = capacity - 1;
}

Queue::~Queue() {
    delete[] queue;
}

void Queue::enqueue(int item) {
    if (isFull()) {
        cout << "Queue is full." << endl;
        exit(1);
    }
    rear = (rear + 1) % capacity;
    queue[rear] = item;
    count++;
    cout << item << " enqueued.";
}

bool Queue::isFull() {
    return count == capacity;
}

bool Queue::isEmpty() {
    return count == 0;
}
