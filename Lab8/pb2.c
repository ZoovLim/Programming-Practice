#include <stdio.h>

int main(){
	int N[3], A[200][200], B[200][200];
	long long tmp = 0;

	for(int i = 0; i < 3; ++i){
		scanf("%d", N + i);
	}

	int C[N[0]][N[2]];

	for(int i = 0; i < N[0]; i++){
		for(int j = 0; j < N[1]; j++){
			scanf("%d", &A[i][j]);		
		}	
	}

	for(int i = 0; i < N[1]; i++){
		for(int j = 0; j < N[2]; j++){
			scanf("%d", &B[i][j]);
		}
	}

	for(int i = 0; i < N[0]; i++){
		for(int j = 0; j < N[2]; j++){
			C[i][j] = 0;
			for(int k = 0; k < N[1]; k++){
				C[i][j] += A[i][k] * B[k][j];
			}		
		} 	
	}

	for(int i = 0; i < N[0]; i++){
		for(int j = 0; j < N[2]; j++){
			printf("%d ", C[i][j]);
		}
		printf("\n");	
	}

	return 0;
}
