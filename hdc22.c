#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to append node at end
void append(struct Node **head, int value) {
    struct Node *newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to count nodes
int countNodes(struct Node *head) {
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// (Optional) function to display list
void displayList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, i, x;
    struct Node *head = NULL;

    // Read number of nodes
    scanf("%d", &n);

    // Read n integers and create linked list
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        append(&head, x);
    }

    // Count and print number of nodes
    int total = countNodes(head);
    printf("%d\n", total);

    // If they want the list as in your example, also do:
    // displayList(head);

    return 0;
}
