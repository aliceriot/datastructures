CC=gcc
CFLAGS=-I/usr/include/openssl -lcrypto 
DEPS=hashtable.h

out/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hashmake: out/hashtest.o
	$(CC) -lm -o hashtest.bin out/hashtest.o -t -I/usr/include/openssl -lcrypto 
