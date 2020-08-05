#include <stdio.h>
#include <string.h>

#define N 3000

int main(){
	char X[N], Y[N], c;
	int ans = 0;

	scanf("%[^\n]s", X);	
    scanf("%*c", c);	
	scanf("%[^\n]s", Y);

	for(int i = 0; i < N; ++i){
		int k = i;
		for(int j = 0; j < strlen(Y); ++j){
			if(X[k] != Y[j]) break;
			else if(j != (strlen(Y) - 1)){
				k++;
				continue;
			}
			else ans++;
		}	
	}

	printf("%d\n", ans);
	
	return 0;
}
