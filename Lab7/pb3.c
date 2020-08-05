#include <stdio.h>

int bs(int*, int, int, int);

int main(void){
	int N, M;
	long long SUM = 0;

	scanf("%d", &N);
	int A[N];
	for(int i = 0; i < N; ++i){
		scanf("%d", &A[i]);
	}
	
	scanf("%d", &M);
	int B[M];
	for(int i = 0; i < M; ++i){
		scanf("%d", &B[i]);
	}

	for(int i = 0; i < M; ++i){
		SUM += bs(A, 0, N, B[i]);	
	}
	
	printf("%lli\n", SUM);
	
	return 0;
}

int bs(int* a, int b, int c, int d){
	int n = (b + c) / 2;
	if(b == c){
		if(a[n] == d) return n + 1;
		else return -1;
	}
	else{
		if(a[n] == d) return n + 1;
		else if(a[n] < d) bs(a, n + 1, c, d);
		else bs(a, b, n, d);
	}
}
