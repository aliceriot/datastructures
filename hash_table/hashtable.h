#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/sha.h>

// linked list structs
typedef struct node {
    struct node *previous;
    struct node *next;
    char *key;
    char *value;
} node;

typedef struct list {
    node *head;
    node *tail;
} list;

// hashtable struct
typedef struct hashtable {
    int size;
    list *table[];
} hashtable;

// function declarations
unsigned char *hash(unsigned char *key);
list **hashinit(int size);
void destroyhash(hashtable *oldtable);
list *listinit();

// function definitions
unsigned char *hash(unsigned char *key)
{ // get the hash of a key
    size_t len = sizeof(key);
    unsigned char output[SHA_DIGEST_LENGTH];
    SHA1(teststring, len, output);
    return output;
}

hashtable *hashinit(int size)
{ // allocates hashtable array, returns pointer to array
    list *hasharray[size];
    hashtable *hashtab;
    hashtab = malloc(sizeof hashtab);

    int i;
    for (i = 0; i < size; i++) {
        memset(hashtab[i], listinit(), sizeof(*doublelist));
    }

    hashtab->table = hashtable;
    hashtab->size = size;
    return hashtab;
}

void destroyhash(hashtable *oldtable)
{ // destroy!!
    int i;
    for (i = 0; i < oldtable->size; i++) {
        destroylist(hashtable->table[i]);
    }
    free(oldtable);
}

// list functions
list *listinit()
{
    list *newlist;
    newlist = malloc(sizeof newlist);
    node *sentinel;
    sentinel = malloc(sizeof sentinel);

    sentinel->key = '\0';
    sentinel->value = '\0';
    sentinel->next = sentinel;
    sentinel->previous = sentinel;

    newlist->head = sentinel;
    newlist->tail = sentinel;
    
    return newlist;
}

void destroylist(list *oldlist)
{
    node *sentinel = oldlist->tail;
    node *iternode = oldlist->head;
    node *next;
    while (iternode != sentinel) {
        next = iternode->next;
        free(iternode);
        iternode = next;
    }
    free(sentinel);
    free(oldlist);
}

