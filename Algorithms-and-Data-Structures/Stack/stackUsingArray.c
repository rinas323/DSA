/*
Understanding Stack (Using Array in C):
A stack is a linear data structure that follows the Last In First Out (LIFO) principle.
In stack operations, the element added most recently is removed first.

Basic Operations of Stack:
1. push() – Adds an element to the top of the stack.
2. pop() – Removes the top element from the stack.
3. peek() – Returns the top element without removing it.
4. isEmpty() – Checks if the stack is empty.
5. isFull() – Checks if the stack is full.

When to Use Stacks:
- Function call management (call stack)
- Undo operations in editors
- Syntax parsing (e.g., balancing symbols)
- Expression evaluation

C Implementation (Using Array):
*/

#include <stdio.h>
#define MAX 100  // Define maximum size of stack

int stack[MAX];
int top = -1;  // Initialize stack top pointer

// Check if the stack is full
int isFull() {
    return top == MAX - 1;
}

// Check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Push operation
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    stack[++top] = value;
    printf("Pushed %d onto the stack.\n", value);
}

// Pop operation
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return stack[top--];
}

// Peek operation
int peek() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return -1;
    }
    return stack[top];
}

// Display the stack
void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;
    while (1) {
        printf("\n--- Stack Menu ---\n");
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

