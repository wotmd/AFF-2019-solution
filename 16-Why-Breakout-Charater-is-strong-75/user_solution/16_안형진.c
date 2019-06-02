#include <stdio.h>

int main(void) {
	char num[5];
	int n;
	
	scanf("%c %c %c %c %c", &num[0], &num[1], &num[2], &num[3], &num[4]);
	
	scanf("%d", &n);
	
	for(int i = 0; i < 5; i++) {
		if(i != n - 1) {
			printf("%c", num[i]);
		}
	}
}