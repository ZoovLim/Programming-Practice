#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int delete(LIST *myList, int value){
	if(myList == NULL) return -1;
	else{
		for(NODE *n = myList->head; n != NULL; n = n->next){
			if(n->value == value){
				NODE *tmp = myList->head;
				
				if(n == myList->head){
					myList->head = n->next;
					
					return 0;				
				}
				else{
					while(tmp->next != n){
						tmp = tmp->next;
					}
					
					tmp->next = n->next;
					free(n);
				}
					return 0;
			}
			else continue;	
		}
	}

	return -1;
}
