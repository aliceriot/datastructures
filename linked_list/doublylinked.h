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

void insertafter(node *after, node *newnode)
{ // insert newnode after after (lol)
    newnode->previous = after;
    after->next->previous = newnode;
    newnode->next = after->next;
    after->next = newnode;
}

void printlist(list *toprint)
{
    node *iternode = list->head;
    while (iternode != list->tail) {
	printf("%s\n", iternode->data);
	first = first->next;
    }
}

    
    
    




