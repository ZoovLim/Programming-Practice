#include <stdio.h>
#include <math.h>

int main(){
	int i = 0, j = 2, count = 0;	
	char a[5];
	int b[2000];
	double tmp = 0, min = 20000.0 * sqrt(2);

	while(i < 5){
		scanf("%c", &a[i]);
		if(a[i] == '\n') break;
		i++;	
	}
	
	i = 0;

	while(scanf("%d", &b[i]) != EOF){
		i++;
		count++;
	}

	i = 0;

	while(i < count){
		while(j < count){
		tmp = sqrt(pow((b[j] - b[i]), 2) + pow((b[j+1] - b[i+1]), 2)); 
		if(tmp <= min) min = tmp;
		j += 2;		
		}
		tmp = 0;
		i += 2;
		j = i + 2;	
	}

	printf("%lf\n", min);

	return 0;
}
