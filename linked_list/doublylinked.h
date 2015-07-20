#include <stdio.h>
#include <string.h>

typedef struct node {
    struct *node previous;
    struct *node next;
    char *data;
} node;

typedef struct list {
    node *head;
    node *tail;
} list;

list *listinit();

// functions

list *listinit()
{
    list *newlist;
    newlist = malloc(sizeof newlist);
    node *sentinel;
    sentinel = malloc(sizeof sentinel);

    sentinel->data = '\0';
    sentinel->next = sentinel;
    sentinel->previous = sentinel;

    list->head = sentinel;
    list->tail = sentinel;
    
    return newlist;
}

    




