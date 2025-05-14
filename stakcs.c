#include <stdio.h>

#define MAXSIZE 5  // Maximum size of the stack

// Update function prototypes to use pointer to top
void push(int stack[], int *top, int value);
void pop(int stack[], int *top);
void display(int stack[], int top);

int main() {
    int stack[MAXSIZE];
    int top = -1;  // Initialize top to -1 (empty stack)
    int choice, value;

    do { 
        printf("\n --- Stacks operations ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
    
        switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(stack, &top, value);  // Pass address of top
            break;
        case 2:
            pop(stack, &top);  // Pass address of top
            break;
        case 3:
            display(stack, top);  // Pass top by value (only reading)
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. please try again.\n");
        }
    } while (choice != 4);  // Changed to 4 to match menu

    return 0;
}

void push(int stack[], int *top, int value) {
    if (*top >= MAXSIZE - 1) {
        printf("Stack overflow\n");
    } else {
        (*top)++;
        stack[*top] = value;
        printf("Pushed %d onto the stack\n", value);
    }
    display(stack, *top);
}

void pop(int stack[], int *top) {
    if (*top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("Popped %d from the stack\n", stack[*top]);
        (*top)--;
    }
    display(stack, *top);
}

void display(int stack[], int top) {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}