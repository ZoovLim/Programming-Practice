#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add(int *, int *);
void mul(int *, int *, int);
int main(){
	char i1[100];
	char i2[100];
	int num1[200] = {0};
	int num2[200] = {0};
	int ans[200] = {0};
	int tmp[200] = {0};
	int tmp2[200] = {0};

	scanf("%[^\n]", i1);
	scanf("%*c");
	scanf("%[^\n]", i2);
	scanf("%*c");
	
	for(int i = 0; i < strlen(i1); i++){
		num1[200 - strlen(i1) + i] = (char)i1[i] - '0';	
	} 
	for(int i = 0; i < strlen(i2); i++){
		num2[200 - strlen(i2) + i] = (char)i2[i] - '0';
	}
 
	for(int i = 0; i < strlen(i2); i++){
		for(int k = 0; k < 200; k++){
			tmp[k] = 0;
			tmp2[k] = 0;
		}

		for(int j = 100 - i; j <= 199 - i; j++){
			tmp[j] = num1[j + i];		
		}
		
		for(int j = 200 - i; j < 200; j++){
			tmp[j] = 0;
		}

		mul(tmp2, tmp, num2[199 - i]);		
		
		add(ans, tmp2);
	}	

	for(int i = 0; i < 200; i++){
		if(ans[i] != 0){
			for(int j = i; j < 200; j++){
				printf("%d", ans[j]);
			}

			break;
		}
		else if(i == 199) printf("0");
	}
	
	return 0;	
}
	

void add(int a[200], int b[200]){
	for(int i = 0; i < 200; i++){
		a[i] += b[i];
	}

	for(int i = 199; i > 0; i--){
		a[i - 1] += a[i] / 10;
		a[i] = a[i] % 10;
	}

	return;
}

void mul(int a[200], int num[200], int n){	
	for(int i = 199; i >= 0; i--){
		a[i] = num[i] * n;	
	}

	for(int i = 199; i > 0; i--){
		a[i - 1] += a[i] / 10;
		a[i] = a[i] % 10;
	}

	return;
}
