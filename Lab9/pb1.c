#include <stdio.h>

void hanoi(char, char, char, int);
void move(char, char);

int main(void){
	int n = 1;
	char a = 'A', b = 'B', c = 'C';

	scanf("%d", &n);
	
	hanoi(a, c, b, n);

	return 0;
}

void hanoi(char a, char c, char b, int n){
	if(n == 1) move(a, c);
	else{
		hanoi(a, b, c, n-1);
		move(a, c);
		hanoi(b, c, a, n-1);	
	}

	return;
}

void move(char a, char b){
	printf("Move from %c to %c\n", a, b);

	return;
}
