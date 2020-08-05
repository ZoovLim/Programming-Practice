#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int pop(STACK *myStack){
	NODE *tmp = (NODE *)malloc(sizeof(NODE));
	tmp = myStack->top;
	myStack->top = tmp->next;

	int value = tmp->value;

	free(tmp);

	return value;
}
