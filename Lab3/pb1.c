#include <stdio.h>

int main(void){
	printf("%d\n", 7/3);
	printf("%f\n", 7/3.0);
	printf("%f\n", (float) 7/3);
// billion scale
	printf("%d\n", 1000000000 * 10 / 10);
	printf("%lld\n", (long long)1000000000 * 10 / 10);
// value of 'A' is 65
	printf("%d\n", 'A' * 2);
	printf("%c\n", 5 * 13);

	return 0;
}
