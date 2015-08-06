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

    printf("\ninitialize the hashtable:\n");
    hashtable *table;
    table = hashinit(100);

    printf("\ntwo things should hash to the same value:\n");
    char trial_text[] = "let's check that!";
    printf("going to hash: '%s'\n", trial_text);
    char trialone[SHA_DIGEST_LENGTH];
    char trialtwo[SHA_DIGEST_LENGTH];
    hash(trial_text, trialone);
    hash(trial_text, trialtwo);
    int i;
    printf("one:\n");
    for (i = 0; i < SHA_DIGEST_LENGTH; i++) {
        printf("%d ", trialone[i]);
    }
    printf("\ntwo:\n");
    for (i = 0; i < SHA_DIGEST_LENGTH; i++) {
        printf("%d ", trialtwo[i]);
    }

    printf("\ndestroy a hashtable:\n");
    destroyhash(table);
    table = hashinit(100);
    printf("success!\n");

}
