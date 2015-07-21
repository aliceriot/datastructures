#include <stdio.h>
#include <string.h>
#include "doublylinked.h"

void main()
{
    list *mylist = listinit();

    char *strings[] = {"monday", "tuesday",
	"wednesday", "thursday", "friday",
	"saturday", "sunday"};
    int i;
    for (i = 0; i < 7; i++) {
	prepend(mylist, nodegen(strings[i]));
    }
    printlist(mylist);
}

