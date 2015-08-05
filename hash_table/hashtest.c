#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/sha.h>

unsigned char *SHA1(const unsigned char *d, size_t n, unsigned char *md);


void main() {
    unsigned char *teststring = "test test";
    size_t len = sizeof(teststring);

    unsigned char hash[SHA_DIGEST_LENGTH];
    SHA1(teststring, len, hash);

    printf("'%s' will hash to:\n%s", teststring, hash);
}


