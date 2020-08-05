#include <stdio.h>
#include <math.h>

int main(){
	int N = 3;
	scanf("%d", &N);

	int p[2 * N];
	int i = 0, j = 2, k = 4;
	double area = 20000 * 10000, tmp = 1.0;

	while(i <= 2 * N - 1){
		scanf("%d", &p[i]);
		i++;
	}

	i = 0;
	
	while(i <= 2 * N - 6){
		while(j <= 2 * N - 4){
			while(k <= 2 * N - 2){
				tmp = 0.5 * fabs((p[i]*p[j+1] + p[j]*p[k+1] + p[k]*p[i+1]) - (p[j]*p[i+1] + p[k]*p[j+1] + p[i]*p[k+1]));
				if(tmp != 0 && tmp < area){
					area = tmp;
				}
				k += 2;		
			}
			j += 2;
			k = j + 2;		
		}
		i += 2;
		j = i + 2;
		k = j + 2;
	}

	printf("%f\n", area);

	return 0;
}
