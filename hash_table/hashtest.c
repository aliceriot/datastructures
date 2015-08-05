#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/sha.h>
#include "hashtable.h"

int main() {
    printf("initialize list:\n");
    list *mylist = listinit();
    printlist(mylist);
    
    printf("add things:\n");
    node *newnode;
    newnode = nodegen("key", "value");
    /* listinsert(mylist, nodegen("key", "value")); */
    /* printlist(mylist); */
}


