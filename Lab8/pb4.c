#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXWORD 50
#define N 500

void swap_str(char **, char **);
void swap_int(int *, int *);
void sort(char *[], int *, int);

int main(void){
	char word[MAXWORD];
	char *w[N];
	int n;
	int i;
	int cnt[N];

	for(i = 0; scanf("%s", word) == 1; ++i){
		w[i] = calloc(strlen(word) + 1, sizeof(char));
		strcpy(w[i], word);
		cnt[i] = 1; 
	}
	n = i;
	
	sort(w, cnt, n);
	
	for(i = 0; i < n; ++i){
		if(w[i] == "A") continue;
		else printf("%s %d\n", w[i], cnt[i]);
	}
	
	return 0;
}

void swap_str(char **p, char **q){
	char *tmp;

	tmp = *p;
	*p = *q;
	*q = tmp;
}

void swap_int(int *p, int *q){
	int tmp;

	tmp = *p;
	*p = *q;
	*q = tmp;
}

void sort(char *w[], int *cnt, int n){
	int i, j;

	for(i = 0; i < n; ++i){
		if(w[i] == "A") continue;
		else{
			for(j = i + 1; j < n; ++j){
				if(strcmp(w[i], w[j]) > 0){
					swap_str(&w[i], &w[j]);
				 	swap_int(&cnt[i], &cnt[j]);
				}
				else if(strcmp(w[i], w[j]) == 0){
					cnt[i]++;
					w[j] = "A";
				}
			}
		}
	}
}
