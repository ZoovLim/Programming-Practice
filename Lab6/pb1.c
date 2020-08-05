#include <stdio.h>

int N = 1, M = 1;

int main(){
	int i = 1;

	scanf("%d", &N);
	scanf("%d", &M);

	while(N <= M){
		i = N - 1;
		if(N == 2) printf("%d ", N);
		while(i > 1){
			if(N % i == 0) break; 
			else if(i == 2){
				printf("%d ", N);
				break;
			} 
			else i--;
		}		
		N++;
	}
	return 0;
}
