// Program to do various linked list exercises
// Written by Patrick Chambers (z5264081) on 27/7/22

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(void) {

    // Demo Copy
    struct node *head = NULL;
    head = add_last(head, 10);
    head = add_last(head, 11);
    head = add_last(head, 12);

    struct node *copied = copy(head);
    printf("Original list: ");
    print_list(head);
    printf("Copy of original list: ");
    print_list(copied);
    copied->data = 42;
    printf("After changing the copy, original list is unchanged:\n");
    printf("Original list: ");
    print_list(head);
    printf("Copy of original list: ");
    print_list(copied);
    printf("\n\n");

    
    // Demo list append
    struct node *head_1 = NULL;
    head_1 = add_last(head_1, 10);
    head_1 = add_last(head_1, 11);
    head_1 = add_last(head_1, 12);

    struct node *head_2 = NULL;
    head_2 = add_last(head_2, 13);
    head_2 = add_last(head_2, 14);
    head_2 = add_last(head_2, 15);

    struct node *appended = list_append(head_1, head_2);
    // Change list 2 to show that it doesn't affect the new appended list
    printf("List 1: ");
    print_list(head_1);
    printf("List 2: ");
    print_list(head_2);
    printf("Appended list: ");
    print_list(appended);
    printf("\n\n");


    // Demo identical
    struct node *head_3 = NULL;
    head_3 = add_last(head_3, 4);
    head_3 = add_last(head_3, 7);
    head_3 = add_last(head_3, 8);

    struct node *head_4 = NULL;
    head_4 = add_last(head_4, 4);
    head_4 = add_last(head_4, 7);
    printf("List 3: ");
    print_list(head_3);
    printf("List 4: ");
    print_list(head_4);
    printf("List 3 is identical to list 4: %d\n", identical(head_3, head_4));
    printf("Adding 8 to the end of list 4\n");
    head_4 = add_last(head_4, 8);
    printf("List 4: ");
    print_list(head_4);
    printf("List 3 is identical to list 4: %d\n", identical(head_3, head_4));

    

    return 0;
}

/** PRESCRIBED FUNCTIONS **/

// Adds a node with the given data to the end of a list
// Takes in the head of the list and an int to add to the list
// Returns the head of the new list (this is the same unless the original list
// is empty
struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

// Print each value of a linked list in this format
// 1 -> 2 -> 3 -> X
// Takes in the head of the list to print
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

// Copies each value of a list over to a new linked list
// Takes in the head of the list to copy
// Returns the head of the new, copied list
struct node *copy(struct node *list) {

    struct node *new_head = NULL;
    struct node *current = list;
    
    while (current != NULL) {
        int value = current->data;
        // For each node we see, we copy its value into a new node and add it to 
        // the end of the list using add_last
        new_head = add_last(new_head, value);
        current = current->next;
    }
    
    return new_head;
}

// Creates a new list made up of the second list appended to the first
// Takes in a first list and a second list to append to the first
// Returns the new appended list
struct node *list_append(struct node *first_list, struct node *second_list) {
    if (first_list == NULL) {
        return copy(second_list);
    }
    struct node *copy_first = copy(first_list);
    struct node *current = copy_first;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = copy(second_list);
    return copy_first;
}

// Determines whether 2 linked lists are identical
// Takes in the head of 2 linked lists
// Returns 1 if the lists are identical or 0 if they are not identical
int identical(struct node *first_list, struct node *second_list) {
    while (first_list != NULL && second_list != NULL) {
        if (first_list->data != second_list->data) {
            return 0;
        }
        first_list = first_list->next;
        second_list = second_list->next;
    }
    if (first_list == NULL && second_list == NULL) {
        return 1;
    }
    return 0;
}

struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    return NULL;
}


