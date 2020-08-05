#include <stdio.h>

int main(void){
	int N, tmp;
	scanf("%d", &N);
	
	int A[N];
	for(int i = 0; i < N; ++i){
		scanf("%d", &A[i]);
	}
	
	for(int j = N - 1; j > 1; --j){
		for(int i = 0; i < j; ++i){
			if(A[i] > A[i + 1]){
				tmp = A[i];
				A[i] = A[i + 1];
				A[i+1] = tmp;		
			}	
		}
	}

 	for(int i = 0; i < N; ++i){
		printf("%d ", A[i]);
	}

	return 0;
}
