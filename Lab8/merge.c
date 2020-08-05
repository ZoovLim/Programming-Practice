#include <stdio.h>

void merge(int arr[], int start, int mid, int end){
	int tmp[end];
	int a = 0, b = mid;

	for(int i = 0; i < end + 1; i++){
		if(a >= mid){
			tmp[i] = arr[b];
			b++;
		}
		else if(b >= end + 1){
			tmp[i] = arr[a];
			a++;
		}
		else if(arr[a] > arr[b]){
			tmp[i] = arr[b];
			b++;
		}
		else{
			tmp[i] = arr[a];
			a++;
		}
	}
	
	for(int i = 0; i < end + 1; i++){
		arr[i] = tmp[i];
	}

	return;
}
