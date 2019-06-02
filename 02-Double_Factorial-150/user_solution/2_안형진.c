#include <stdio.h>

int facto(int n) {
	if(n == 0) {
		return 1;
	}
	if(n == 1) {
		return 1;
	}
	
	return n * facto(n - 2);
}

int main(void) {
	int n;
	
	scanf("%d", &n);
	
	printf("%d", facto(n));
}

