#include "list.h"
#include <stdio.h>
#include <stdlib.h>

void insert(LIST *myList, int index, int value){
	NODE *newNode = (NODE *)malloc(sizeof(NODE));

	newNode->value = value;
	newNode->next = NULL;

	if(myList->head == NULL) myList->head = newNode;
	else if(index == 0){
		NODE *tmp = myList->head;
		newNode->next = tmp;
		myList->head = newNode;
	}
	else{
		NODE *tmp = myList->head;

		for(int i = 0; i < index - 1; i++){
			tmp = tmp->next;		
		}
		newNode->next = tmp->next;
		tmp->next = newNode;
	}

	return;
}
