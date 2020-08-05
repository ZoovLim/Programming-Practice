#include <stdio.h>

int main(){
	int arr[100];
	char ar[4];
	int i = 0, j = 0, count = 0;
	int sum = -100000;
	int tmp = 0;

	for(i = 0; i < 4; i++){
		scanf("%c", &ar[i]);
		if(ar[i] == '\n') break;	
	}
	
	i = 0;

	while(scanf("%d", &arr[i]) != EOF){
		i++;
		count++;
	}

	i = 0;

	while(i < count){
		while(j < count){
			tmp += arr[j];
			if(tmp >= sum) sum = tmp;
			j++;
		}
		i++;
		j = i;
		tmp = 0;
	}
	
	printf("%d\n", sum);

	return 0;
}
