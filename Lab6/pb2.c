#include <stdio.h>

int N = 0;

int main(){
	scanf("%d", &N);

	int arr[N];
	int i = 0, j = 0, rank = N + 1;

	while(i <= N - 1){
		scanf("%d", &arr[i]);
		i++;
	}

	i = 0;

	while(i <= N - 1){
		while(j <= N - 1){
			if(arr[i] >= arr[j]){
				rank--;
				j++;
			}
			else{
				j++;
			}		
		}
		printf("%d ", rank);
		j = 0;
		rank = N + 1;
		i++;	
	}

	return 0;
}
