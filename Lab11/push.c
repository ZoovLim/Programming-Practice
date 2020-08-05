#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void push(STACK *myStack, int value){
	NODE *newnode = (NODE *)malloc(sizeof(NODE));
	newnode->value = value;
	newnode->next = myStack->top;
	myStack->top = newnode;

	return;
}
