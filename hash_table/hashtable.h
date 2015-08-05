#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/sha.h>

// linked list structs
typedef struct node {
    struct node *previous;
    struct node *next;
    char *key;
} node;

typedef struct list {
    node *head;
    node *tail;
} list;

// function declarations
unsigned char *hash(unsigned char *key);
list **hashinit(int size);

// function definitions
unsigned char *hash(unsigned char *key)
{ // get the hash of a key
    size_t len = sizeof(key);
    unsigned char output[SHA_DIGEST_LENGTH];
    SHA1(teststring, len, output);
    return output;
}

list **hashinit(int size)
{ // allocates hashtable array, returns pointer to array
    list *hashtab[size];

    int i;
    for (i = 0; i < size; i++) {
        memset(hashtab[i], *void, sizeof(*doublelist));
    }
    return hashtab;
}
