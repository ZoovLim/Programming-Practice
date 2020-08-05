#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char name[31];
	char id[11];
	int score;
}student;

void swap(student *, student *);

int main(){
	int n;

	scanf("%d", &n);
	scanf("%*c");

	student *s = (student *)malloc(n * sizeof(student));

	for(int i = 0; i < n; i++){
		scanf("%s", s[i].name);
		scanf("%s", s[i].id);
		scanf("%d", &(s[i].score));
		scanf("%*c");
	}

	char c;
	scanf("%c", &c);

	switch(c){
	case 'N':
		for(int j = n; j > 0; j--){
			for(int i = 0; i < j - 1; i++){
				if(strcmp((s[i].name), (s[i + 1].name)) > 0){
					swap(&s[i], &s[i + 1]);
				}	
			}
		}
		break;
	case 'I':
		for(int j = n; j > 0; j--){
			for(int i = 0; i < j - 1; i++){
				if(strcmp((s[i].id), (s[i + 1].id)) > 0){
					swap(&s[i], &s[i + 1]);
				}
			}
		}
		break;
	case 'S':
		for(int j = n; j > 0; j--){
			for(int i = 0; i < j - 1; i++){
				if(s[i].score < s[i + 1].score){
					swap(&s[i], &s[i + 1]);
				}
			}
		}
		break;
	}
	
	for(int i = 0; i < n; i++){
		printf("%s %s %d\n", s[i].name, s[i].id, s[i].score);
	}

	free(s);

	return 0;
}

void swap(student *s1, student *s2){
	student tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}
