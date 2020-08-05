#include <stdio.h>

int main(void){
	int i = 0, a = 0, sum = 0;
	double avg = 0;

	while(scanf("%d", &a) != EOF){
		sum += a;
		i++;
	}
	avg = (double)(sum)/i;

	printf("%lf\n", avg);

	return 0;
}
