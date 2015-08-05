#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/sha.h>

unsigned char *hash(unsigned char *key);

unsigned char *hash(unsigned char *key)
{ // get the hash of a key
    size_t len = sizeof(key);
    unsigned char output[SHA_DIGEST_LENGTH];
    SHA1(teststring, len, output);
    return output;
}

doublelist **hashtab(int size)
{ // allocates hashtable array, returns pointer to array
    doublelist *hashtab[size]
}
