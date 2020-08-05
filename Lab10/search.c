#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int search(LIST *myList, int value){
	int i = 0;

	for(NODE *n = myList->head; n != NULL; n = n->next){
		if(n->value == value) return i;
		else i++;	
	} 

	return -1;
}
