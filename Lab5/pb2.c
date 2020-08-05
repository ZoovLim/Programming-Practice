#include <stdio.h>

char arr[100000];
int count[26];

int main(){
	int i = 0;
	int n = 0;

	for (i = 0; i < 1000; i++){
		scanf("%c", &arr[i]);
		if(arr[i] == '\n') break;	
	}
	
	i = 0;

	while(scanf("%c", &arr[i]) != EOF){
		if(arr[i] >= 'a' && arr[i] <= 'z'){
			count[(arr[i] - 'a')]++;  
			i++;
		}
		else if(arr[i] == '\n'){
			break;
		}
		else{
			count[(arr[i] - 'A')]++;
			i++;		
		}	
	}
	
	for (i = 0; i < 26; i++){
		if(count[i] != 0){
			printf("%c ", (char)(i + 'a'));
			printf("%d\n", count[i]);
		}	
	}

	return 0;
}
