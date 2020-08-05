#include <stdio.h>

int gdc(int, int);

int main(void){
	int N;
	scanf("%d", &N);

	long long SUM = 0;

	int A[2 * N];
	for(int i = 0; i < 2 * N; ++i){
		scanf("%d", &A[i]);	
	}

	for(int i = 0; i < 2 * N - 1; i += 2){
		SUM += gdc(A[i], A[i + 1]);
	}
	
	printf("%lli\n", SUM);

	return 0;
}

int gdc(int a, int b){
	if(b > a) gdc(b, a);
	else if(b != 0) gdc(b, a % b);
	else return a;	
	}
