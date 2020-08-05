#include "list.h"
#include <stdio.h>
#include <stdlib.h>

void print(LIST *myList){
	for(NODE *pt = myList->head; pt != NULL; pt = pt->next){
		printf("%d ", pt->value);
	}
	printf("\n");
}

int main(){
	char type;
	int index, value;
	LIST myList = {NULL};
	while(1){
		scanf("%c", &type);
		if(type == 'q'){
			break;
		}
		else if(type == 'i'){
			scanf("%d %d", &index, &value);
			insert(&myList, index, value);
		}
		else if(type == 's'){
			scanf("%d", &value);
			printf("%d\n", search(&myList, value));
		}
		else if(type == 'd'){
			scanf("%d", &value);
			delete(&myList, value);
		}
		scanf("%*c");
	}
	print(&myList);
	return 0;
}
