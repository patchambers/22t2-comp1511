// Function implementations for the linked list functions in tutorial 8
// Written by Rifa Jamal and Patrick Chambers on 21/7/22


#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);
struct node *insert_head(struct node *head, int data);
void print_list(struct node *head);
void print_last(struct node *head);

int main(void) {
    
    // Create list by making a node and then adding nodes in front of it
    struct node *list = create_node(5);
    // Current list: 5 -> X
    list = insert_head(list, 4);
    // Current list: 5 -> 4 -> X
    list = insert_head(list, 3);
    // Current list: 5 -> 4 -> 3 -> X
    
    printf("Initial list: \n");
    print_list(list);
    printf("Last element of list: \n");
    print_last(list);
    
    list = insert_head(list, 2);
    printf("List after adding '2': \n");
    print_list(list);
    

    return 0;
}


struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
struct node *insert_head(struct node *head, int data) {
    struct node *new_node = create_node(data);
    new_node->next = head;
    return new_node;
}

void print_list(struct node *head) {
    // Initialisation: create pointer and point it to start of list
    struct node *current = head;
    // while (current hasnt got to end)
    while (current != NULL) {
        // point current to next node
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}

void print_last(struct node *head) {
    struct node *current = head;
    
    if (current == NULL) {
        printf("X\n");
        return;
    }

    while (current->next != NULL) {
        current = current->next;
    }
    printf("%d\n", current->data);
}

