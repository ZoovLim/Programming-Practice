// Progarmming Practice
// Skeleton Header for Week 10, Linked List
// You don't have to understand what ifndef, endif statement is.

#ifndef __LINKEDLIST_LIST_H__

#define __LINKEDLIST_LIST_H__

typedef struct NODE{
	int value;
	struct NODE *next;
} NODE;


typedef struct LIST{
	NODE *head;
} LIST;

int search(LIST *myList, int value);
void insert(LIST *myList, int index, int value);
int delete(LIST *myList, int value);
void print(LIST *myList); // may use for debugging

#endif

