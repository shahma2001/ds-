#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Stack {
    struct Node* top;
};


void initStack(struct Stack* stack) {
    stack->top = NULL;
}
int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}
void push(struct Stack* stack, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }
newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
    printf("Pushed %d onto the stack\n", value);
}
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! The stack is empty.\n");
        return -1; // Return an error code
    }
    struct Node* temp = stack->top;
    int poppedValue = temp->data;
    stack->top = stack->top->next;
    free(temp);
    printf("Popped %d from the stack\n", poppedValue);
    return poppedValue;
}
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Nothing to peek.\n");
        return -1;
    }
    return stack->top->data;
}
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("The stack is empty.\n");
        return;
    }
    struct Node* current = stack->top;
    printf("Stack contents: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
int main() {
    struct Stack stack;
    initStack(&stack);

    int choice, value;
do {

        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display Stack\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
 switch (choice) {
            case 1:
                printf("Enter the value to push onto the stack: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                value = peek(&stack);
                if (value != -1) {
                    printf("Peek: Top element is %d\n", value);
                }
                break;
            case 4:
                display(&stack);
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
 } while (choice != 5);

    return 0;
}

