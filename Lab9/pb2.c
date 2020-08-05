#include <stdio.h>
#include <stdlib.h>

void merge(int *, int, int, int);
void merge_sort(int *, int, int);
int tmp[100000];

int main(){
	int N;

	scanf("%d", &N);
	
	int *a;

	a = (int *)malloc(N * sizeof(int));

	for(int i = 0; i < N; i++){
		scanf("%d", a + i);
	}

	merge_sort(a, 0, N - 1);
	
	for(int i = 0; i < N; i++){
		printf("%d ", a[i]);
	}

	free(a);

	return 0;
}

void merge(int *a, int start, int mid, int end){		
	int n1 = start, n2 = mid + 1, k = start;

	while(n1 <= mid && n2 <= end){
		if(a[n1] > a[n2]){
			tmp[k++] = a[n2++];
		}
		else{
			tmp[k++] = a[n1++];
		}
	}
	
	if(n1 > mid){
		for(int i = n2; i <= end; i++){
			tmp[k++] = a[i];
		}
	} 
	else{
		for(int i = n1; i <= mid; i++){
			tmp[k++] = a[i];
		}
	}

	for(int i = start; i < end + 1; i++){
		a[i] = tmp[i];
	}

	return;
}

void merge_sort(int *a, int start, int end){
	int mid = (start + end) / 2;

	if(start < end){
		merge_sort(a, start, (start + end) / 2);
		merge_sort(a, (start + end) / 2 + 1, end);
		merge(a, start, mid, end);	
	}
}
