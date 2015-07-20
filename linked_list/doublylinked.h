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
    list *initlist;
    initlist = malloc(sizeof initlist);

