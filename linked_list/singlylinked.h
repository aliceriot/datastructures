#include <stdio.h>
#include <stdlib.h>

// nodes in our list
typedef struct node node;
struct node {
    node *cdr;
    char *data;
}

// pointer to the first element
typedef struct list list;
struct list {
    node *car;
}

// function declarations
struct list *listinit();


// list operation functions

list *listinit() 
{ // initialize a list with a sentinel node

    list *newlist = malloc(sizeof list);
    node *sentinel = malloc(sizeof node);
    if (sentinel == NULL)
        return 0; 

    sentinel->data = '\0';
    sentinel->cdr = sentinel;
    newlist->car = sentinel;

}



