#include <stdio.h>

int main(void){	
	char ch = 'a';

	while(scanf("%c", &ch) != EOF){
		if(ch >= 'A' && ch <= 'Z'){
			ch += 'a' - 'A';
		}
		else if(ch >= 'a' && ch <= 'z'){
			ch -= 'a' - 'A';
		}
	printf("%c", ch);
	} 
	return 0;
}
