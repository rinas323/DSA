/*
Understanding Stack Using Linked List in C:
A stack is a linear data structure that follows the Last In First Out (LIFO) principle.
In this version, we implement a stack using a singly linked list instead of an array.

Advantages of Using Linked List:
- Dynamic size (no need to define MAX size)
- Efficient memory usage (no unused space)

Basic Stack Operations:
1. push() – Inserts an element at the top of the stack
2. pop() – Removes and returns the top element
3. peek() – Returns the top element without removing it
4. isEmpty() – Checks if the stack is empty

Use Cases:
- Expression parsing
- Undo features
- Function call tracking (call stack)

C Implementation (Using Linked List):
*/

#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL; // Pointer to the top of the stack

// Check if the stack is empty
int isEmpty() {
    return top == NULL;
}

// Push operation
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap Overflow!\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("Pushed %d onto the stack.\n", value);
}

// Pop operation
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow!\n");
        return -1;
    }
    struct Node* temp = top;
    int popped = temp->data;
    top = top->next;
    free(temp);
    return popped;
}

// Peek operation
int peek() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return -1;
    }
    return top->data;
}

// Display stack elements
void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements: ");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, value;
    while (1) {
        printf("\n--- Stack Menu (Using Linked List) ---\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != -1)
                    printf("Popped %d from the stack.\n", value);
                break;
            case 3:
                value = peek();
                if (value != -1)
                    printf("Top of the stack is %d.\n", value);
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

