#include <stdio.h>

int main(){
	int a, b, c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	int max;

	if(a <= b){
		if(b <= c) max = c;
		else max = b;
	}
	else{
		if(a >= c) max = a;
		else max = c;		
	}
	printf("%d\n", max);

	return 0;
}
