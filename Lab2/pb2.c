#include <stdio.h>
#define pi 3.14

int main(){
	int R;
	double Area;

	scanf("%d", &R);
	Area = pi * R * R;
	printf("%f\n", Area);

	return 0;
}
