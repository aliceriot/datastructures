#include <stdio.h>
#include "singlylinked.h"


// this is just a file to test my singly linked list
void main()
{
    list *mylist = listinit();
    char *strings[] = {"monday", "tuesday", "wednesday", "thursday",
         "friday", "saturday", "sunday"};

    int i;

    for (i = 0; i < 7; i++) {
        insertstart(mylist, nodegen(strings[i]));
    }

    printlist(mylist);
}




    


