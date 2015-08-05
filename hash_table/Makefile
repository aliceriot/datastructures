CC=gcc
CFLAGS=-t -I/usr/include/openssl -L/usr/lib/x86_64-linux-gnu -lcrypto -lssl3 -lssl
DEPS=hashtable.h

out/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hashmake: out/hashtest.o
	$(CC) -lm -o hashtest.bin out/hashtest.o
