#include <stdio.h>

int bs(int* a, int b, int c, int d);

int main(){
	int N = 1, i = 0;
	int ans = -1;

	scanf("%d", &N);
	
	int n[N];

	for(i = 0; i <= N - 1; i++){
		scanf("%d", &n[i]);	
	}
	
	scanf("%d", &i);

	ans = bs(n, 0, N - 1, i);

	printf("%d\n", ans);

	return 0;
}

int bs(int* a, int b, int c, int d){
	int n = (b + c) / 2;
	if(b == c && a[n] == d) return n + 1;
	else if(b == c && a[n] != d) return -1;
	else if(a[n] < d) bs(a, n + 1, c, d);
	else bs(a, b, n, d);
}
