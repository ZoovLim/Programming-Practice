#include <stdio.h>

int main(){
	char ar[6];
	int arr[100000];
	int i = 0;
	
	for(i = 0; i < 10000; i++){
		scanf("%c", &ar[i]);
		if(ar[i] == '\n') break;
	}

	i = 0;
	
	while(scanf("%d", &arr[i]) != EOF){			
		i++;			
	}
	
	while(i > 0){
		printf("%d", arr[i-1]);
		printf(" ");
		i--;	
	}
 	printf("\n");

	return 0;
}
