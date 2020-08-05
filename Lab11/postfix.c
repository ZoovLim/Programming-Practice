#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE{
	int value;
	struct NODE *next;
} NODE;

typedef struct STACK{
	NODE *top;
} STACK;

void push(STACK *myStack, int value);
int pop(STACK *myStack);

int main(){
	STACK *myStack = (STACK *)malloc(sizeof(STACK));
	myStack->top = NULL;
	
	char a[1000000];
	int i = 0;
	int value = 0;

	for(i = 0; scanf("%s", a) == 1; i++){				
		 if(strcmp(a, "+") == 0){
			value = (myStack->top->next->value) + (myStack->top->value);
			pop(myStack);
			pop(myStack);
			push(myStack, value);
			i++;
		}
		else if(strcmp(a, "-") == 0){
			value = (myStack->top->next->value) - (myStack->top->value);
			pop(myStack);
			pop(myStack);
			push(myStack, value);
			i++;
		}
		else if(strcmp(a, "*") == 0){
			value = (myStack->top->next->value) * (myStack->top->value);
			pop(myStack);
			pop(myStack);
			push(myStack, value);		
			i++;
		}
		else if(strcmp(a, "/") == 0){
			value = (myStack->top->next->value) / (myStack->top->value);
			pop(myStack);
			pop(myStack);
			push(myStack, value);		
			i++;
		}
		else{
			value = atoi(a);
			push(myStack, value);
			i++;
		}
	}
	
	printf("%d\n", myStack->top->value);
	
	return 0;
}

void push(STACK *myStack, int value){
	NODE *newnode = (NODE *)malloc(sizeof(NODE));
	newnode->value = value;
	newnode->next = myStack->top;
	myStack->top = newnode;

	return;
}

int pop(STACK *myStack){
	NODE *tmp = (NODE *)malloc(sizeof(NODE));
	tmp = myStack->top;
	myStack->top = tmp->next;

	int value = tmp->value;

	free(tmp);

	return value;
}
