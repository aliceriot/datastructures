#include <stdio.h>
#include "singlylinked.h"


// this is just a file to test my singly linked list
void main()
{
    // make a list to test
    list *mylist = listinit();

    // add some data do it
    char *strings[] = {"monday", "tuesday", "wednesday", "thursday",
         "friday", "saturday", "sunday"};
    int i;
    for (i = 0; i < 7; i++) {
        insertstart(mylist, nodegen(strings[i]));
    }

    // check
    printlist(mylist);
    printf("\n");

    // delete the first item
    deletebeginning(mylist);
    printlist(mylist);

}




    


