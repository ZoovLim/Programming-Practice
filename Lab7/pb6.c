#include <stdio.h>

int main(void){
	int N;
	scanf("%d", &N);

	int A[N];
	for(int i = 0; i < N; ++i){
		scanf("%d", &A[i]);
	}

	long long tmp = 0, MAX = -100000000000;

	for(int i = 0; i < N; ++i){
		tmp += A[i];
		if(tmp > MAX) MAX = tmp;
		else if(tmp > 0) continue;
		else tmp = 0;	
	}

	printf("%lli\n", MAX);

	return 0;
}
