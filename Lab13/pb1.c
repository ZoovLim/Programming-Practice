#include <stdio.h>

typedef struct point{
	int x1;
	int y1;
	int x2;
	int y2;
} point;

int main(){
	point a, b;

	scanf("%d %d %d %d", &a.x1, &a.y1, &a.x2, &a.y2);
	scanf("%d %d %d %d", &b.x1, &b.y1, &b.x2, &b.y2);

	if(a.x1 < b.x2 && b.x1 < a.x2 && a.y1 < b.y2 && b.y1 < a.y2){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}

	return 0;
}
