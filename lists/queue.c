#include <stdio.h>
#include <stdlib.h>

struct Node {
    int item;
    struct Node* next;
};

typedef struct {
    struct Node* head;
} Queue;

struct Node *createNode(int item) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->item = item;
    newNode->next = NULL;

    return newNode;
}

void enqueue(Queue* queue, int item) {
    if (queue->head == NULL) {
        queue->head = createNode(item);
        return;
    }

    struct Node* temp = queue->head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = createNode(item);
}

void dequeue(Queue* queue) {
    if (queue->head == NULL) return;

    struct Node* temp = queue->head->next;
    free(queue->head);
    queue->head = temp;
}

void showQueue(Queue* queue) {
    if (queue->head == NULL) {
        printf("Empty queue!\n");
        return;
    }

    struct Node* temp = queue->head;
    while(temp != NULL) {
        printf("%d -> ", temp->item);
        temp = temp->next;
    }

    printf("NULL\n");
}

void clearQueue(Queue* queue) {
    while(queue->head != NULL) {
        dequeue(queue);
    }
}

int main() {
    Queue* queue = (Queue*) malloc(sizeof(Queue));
    queue->head = NULL;

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);

    showQueue(queue);

    dequeue(queue);

    showQueue(queue);

    clearQueue(queue);

    showQueue(queue);

    free(queue);
    
    return 0;
}