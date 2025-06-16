#include <stdio.h>
#include <stdlib.h>

// Doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

// Insert at end
void insert(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Delete by value
void deleteNode(int value) {
    struct Node* temp = head;

    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    if (temp == NULL) return;

    if (temp->prev) {
        temp->prev->next = temp->next;
    } else {
        head = temp->next;
    }

    if (temp->next) {
        temp->next->prev = temp->prev;
    }

    free(temp);
}

// Print forward
void printList() {
    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// a. Print reverse
void printReverse() {
    struct Node* temp = head;
    if (temp == NULL) return;

    // Go to the end
    while (temp->next != NULL) {
        temp = temp->next;
    }

    printf("Reverse: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

// b. Delete middle node
void deleteMiddle() {
    if (head == NULL || head->next == NULL) return;

    struct Node* slow = head;
    struct Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // slow now points to the middle node
    if (slow->prev) {
        slow->prev->next = slow->next;
    }
    if (slow->next) {
        slow->next->prev = slow->prev;
    }

    // If middle was head
    if (slow == head) {
        head = slow->next;
    }

    printf("Deleted middle element: %d\n", slow->data);
    free(slow);
}

// c. Swap first and last
void swapFirstLast() {
    if (head == NULL || head->next == NULL) return;

    struct Node* first = head;
    struct Node* last = head;

    while (last->next != NULL) {
        last = last->next;
    }

    // Swap data
    int temp = first->data;
    first->data = last->data;
    last->data = temp;

    printf("Swapped first (%d) and last (%d)\n", last->data, first->data);
}
