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

Nice! Let's dig into what we've got going on here a little. Basically, to
start off we need some structs to represent nodes in our list, and also to
hold a reference to the first and last elements of the list. We'll call
these `node` and `list`, respectively (creative naming!):

    typedef struct node {
        struct node *cdr;
        char *data;
    } node;

    typedef struct list {
        node *car;
        node *tail;
    } list;

So each `node` has a pointer to some string (our data) and to `cdr`, which
is the rest of the list. I took this naming convention from Scheme because
I like it.

`cdr` is always going to be a pointer to either another node in the list
or to the sentinel node. A sentinal node is basically a special node which
signifies the end of the list, we add it when we initialize the list.
Speaking of which, how do we initialize a list? Well, it looks like this:

    list *listinit() 
    { // initialize a list with a sentinel node

        list *newlist;
        newlist = malloc(sizeof *newlist);
        node *sentinel;
        sentinel = malloc(sizeof *sentinel);
        if (sentinel == NULL)
            return 0; 

        sentinel->data = '\0';
        sentinel->cdr = sentinel;
        newlist->car = sentinel;
        newlist->tail = sentinel;

        return newlist;
    }

So we have a function `listinit` which returns a pointer to a list. We
also allocate a `node` which has no data in it (`sentinel->data = '\0'`).
We tell our list that this sentinel is the end by assigning it to
`newlist->tail`. For now, since we have no other list elements, the
sentinel node is both the first and last element, so it's also the `car`
of this list. Cool!





       


