#include "Queue.hpp"

Queue::Queue(unsigned int capacity) {
    this->capacity = capacity;
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
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        exit(1);
    }
    int item = queue[front];
    front = (front + 1) % capacity;
    count--;
    return item;
}

bool Queue::isFull() {
    return count == capacity;
}

bool Queue::isEmpty() {
    return count == 0;
}

int Queue::size() {
    return count;
}

void Queue::display() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        exit(1);
    }
    for (int i = 0; i < count; i++) {
        cout << queue[(front + i) % capacity] << " ";
    }
    cout << endl;
}
