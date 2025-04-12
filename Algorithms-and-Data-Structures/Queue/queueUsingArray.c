/*
Understanding Queue Using Array in C:
A queue is a linear data structure that follows the First In First Out (FIFO) principle.
In this version, we implement a queue using a fixed-size array.

Basic Queue Operations:
1. enqueue() – Inserts an element at the rear end
2. dequeue() – Removes and returns the element from the front
3. peek() – Returns the element at the front without removing it
4. isEmpty() – Checks if the queue is empty
5. isFull() – Checks if the queue is full

Use Cases:
- Printer queue
- CPU task scheduling
- Call center systems
- Data buffering

C Implementation (Using Array):
*/

#include <stdio.h>
#define MAX 100  // Maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;

// Check if the queue is empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Check if the queue is full
int isFull() {
    return rear == MAX - 1;
}

// Enqueue operation
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    queue[++rear] = value;
    printf("Enqueued %d to the queue.\n", value);
}

// Dequeue operation
int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow!\n");
        return -1;
    }
    return queue[front++];
}

// Peek operation
int peek() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return -1;
    }
    return queue[front];
}

// Display the queue elements
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;
    while (1) {
        printf("\n--- Queue Menu (Using Array) ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                value = dequeue();
                if (value != -1)
                    printf("Dequeued %d from the queue.\n", value);
                break;
            case 3:
                value = peek();
                if (value != -1)
                    printf("Front of the queue is %d.\n", value);
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}

