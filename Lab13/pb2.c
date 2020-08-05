#include <stdio.h>
#include <stdlib.h>

typedef struct point{
	int x1;
	int y1;
	int x2;
	int y2;
} point;

int main(){
	int n;
	int area = 0;
	point tmp;

	scanf("%d", &n);	
	
	point *p = (point *)malloc(n * sizeof(point));

	for(int i = 0; i < n; i++){
		scanf("%d %d %d %d", &p[i].x1, &p[i].y1, &p[i].x2, &p[i].y2);
	}
	
	tmp = p[0];

	for(int i = 1; i < n; i++){
		if(tmp.x1 < p[i].x2 && p[i].x1 < tmp.x2 && tmp.y1 < p[i].y2 && p[i].y1 < tmp.y2){
			if(tmp.x1 < p[i].x1){
				tmp.x1 = p[i].x1;
			}
			if(tmp.x2 > p[i].x2){
				tmp.x2 = p[i].x2;
			}
			if(tmp.y1 < p[i].y1){
				tmp.y1 = p[i].y1;
			}
			if(tmp.y2 > p[i].y2){
				tmp.y2 = p[i].y2;
			}
		}
		else{
			printf("%d\n", 0);
			
			return 0;
		}
	}

	area = (tmp.x2 - tmp.x1) * (tmp.y2 - tmp.y1);
	printf("%d\n", area);

	free(p);

	return 0;
}
