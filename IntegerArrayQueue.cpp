#include "IntegerArrayQueue.h"
#include <iostream>

bool IntegerArrayQueue::enqueue(int value) {
    // Check to see if the array is full
    if(front==back) {
        return false; // Array full, return false
    } else {
        // Assign value to the new back
        array[front] = value;
        // Move the front of the array
        front++;
        // Success, return true
        return true;
    }
}

int IntegerArrayQueue::dequeue() {
    if(front==0) {
        if(array[front]!=0) {
            // Clear the value without moving the front
            int val = array[front];
            array[front] = 0;
            return val;
        } else {
            return 0;
        }
    } else {
        // Move the front
        front--;
        // Save the value to a temp variable
        int val = array[front];
        // Set the value to 0
        array[front] = 0;
        // Return the value
        return val;
    }
    // If we exit the if statement for whatever reason, return 0
    return 0;
}

/* */
int main(void) {
    IntegerArrayQueue queue;

    queue.enqueue(1);
    queue.enqueue(3);
    queue.enqueue(6);
    queue.enqueue(10);
    queue.enqueue(15);

    queue.printArrayQueue();
    
    return EXIT_SUCCESS;
} 