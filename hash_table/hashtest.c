#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/sha.h>
#include "hashtable.h"

int main() {
    printf("initialize list:\n");
    list *mylist = listinit();
    printlist(mylist);
    
    printf("\nadd things:\n");
    listinsert(mylist, nodegen("key", "value"));
    listinsert(mylist, nodegen("bloop", "dingles"));
    node *testnode = nodegen("canwe", "delete?");
    listinsert(mylist, testnode);
    printlist(mylist);

    printf("\nremove things:\n");
    listremove(mylist, testnode);
    printlist(mylist);

    printf("\nsearch for things!\n");
    node *search = listsearch(mylist, "bloop", "dingles");
    listremove(mylist, search);
    printlist(mylist);

}
