#include <iostream>
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

bool Queue::isFull() {
    return count == capacity;
}

bool Queue::isEmpty() {
    return count == 0;
}
