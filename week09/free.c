// Program to the use of free and malloc use after free 
// Compile this with "dcc -o free free.c --leak-check" to see when memory 
// leaks occur
// Patrick Chambers (z5264081), 14/4/22

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}


int main(void) {
    
    struct node *head = create_node(4);

    printf("Data: %d\n", head->data);
    
    // Uncommenting this line will give a memory leak
    //free(head);

    // Uncommenting this line will after freeing head will give a malloc use
    // after free error
    //printf("Data: %d\n", head->data);


    return 0;
}

