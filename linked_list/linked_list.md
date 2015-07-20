#Linked List

A linked list is a pretty simple data structure. This image stolen from
wikipedia gives you an overview of what they look like:

![](images/singly_linked_list.svg)

basically we have a series of nodes, and each node has either some data or
a pointer to some data and a pointer to the next node. Cool! This lets us so
some fun things, like insert new nodes between existing ones, and delete nodes
without affecting the surrounding nodes.

There are a couple different kinds of linked lists, several of which I've
implemented.

##Singly Linked List

A singly linked list is probably the most simple, and is the variant which
stores the least information about other nodes. This is sort of a trade-off: we
get a slight decrease in storage size, but certain operations (like append
operations, or reversing the list) are not efficient.

Anyway, my singly linked list implementation is in `singlylinked.h`, with tests
and so on in `single.c`. If you want to see those tests you can do:

    gcc single.c -o single.bin
    ./single.bin

Nice! 


