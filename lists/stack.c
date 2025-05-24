// Refazer a lógica da pilha

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int item;
    struct Node* next;
};

typedef struct {
    struct Node* top;
} Stack;

struct Node *create_node(int item) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->item = item;
    new_node->next = NULL;

    return new_node;
}

void push(Stack* stack, int item) {
    struct Node* temp = stack->top;

    stack->top = create_node(item);
    stack->top->next = temp;
}

void pop(Stack* stack) {
    if (stack->top == NULL) return;

    struct Node* temp = stack->top->next;

    free(stack->top);
    stack->top = temp;
}

void show_stack(Stack* stack) {
    if (stack->top == NULL) {
        printf("Empty Stack!");
        return;
    }

    struct Node* temp = stack->top;
    while(temp != NULL) {
        printf("%d <- ", temp->item);
        temp = temp->next;
    }
    printf("Bottom\n");
}

void clear_stack(Stack* stack) {
    while(stack->top != NULL) {
        pop(stack);
    }
}

int main() {
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    stack->top = NULL;

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    show_stack(stack);

    pop(stack);
    pop(stack);
    push(stack, 4);
    show_stack(stack);

    clear_stack(stack);
    show_stack(stack);

    free(stack);
    return 0;
}