#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);
void perm(int *, int, int, int);

int cnt = 0;
int main(){
	int N, X;

	scanf("%d", &N);
	scanf("%d", &X);

	int *n;

	n = (int *)malloc(N * sizeof(int));

	for(int i = 0; i < N; i++){
		n[i] = i + 1;
	}

	perm(n, N, 0, X);

	free(n);

	return 0;
}

void swap(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;

	return;
}

void perm(int *n, int N, int depth, int X){	
	if(depth == N - 1){
		cnt++;
		if(cnt == X){
			for(int i = 0; i < N; i++){
				printf("%d", n[i]);
			}
			return;
		}
	}
	else{
		for(int i = depth; i < N; i++){
			swap(n + depth, n + i);
			for(int j = i; j > depth + 1; j--){
				swap(n + j, n + j - 1);
			}
			perm(n, N, depth + 1, X);
			for(int j = depth; j < i; j++){
				swap(n + j, n + j + 1);
			} 
		}
	}
}
