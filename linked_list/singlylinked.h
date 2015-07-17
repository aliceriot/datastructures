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
    node *tail;
}

// function declarations
struct list *listinit();
int insert(node *after, node *new);
struct node *nodegen(char *data);


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
    newlist->tail = sentinel;

    return newlist;
}

int insert(node *after, node *new)
{ // insert 'new' following 'after'
    new->cdr = after->cdr;
    after->cdr = new;
    return 0;
}

node *nodegen(char *input)
{ // make a new node, returns ptr
    node *newnode = malloc(sizeof node);
    newnode->data = input;
    return newnode;
}

void deletenext(node *after)
{ // delete the node following
    node *toremove = after->cdr;
    after->cdr = toremove->cdr;
    free(toremove);
}



