#include <stdio.h>

int main(void){
	int i = 1, j = 1;

	while(i <= 9){
		while(j <= 9){
			printf("%d*%d=%d\n", i, j, i * j);
			j++;		
		}
	i++;
	j = 1;
	}
	
	return 0;
}
