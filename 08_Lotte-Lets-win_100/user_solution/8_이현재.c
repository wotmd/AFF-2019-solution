#include <stdio.h>
#include <string.h>
int main() {
	
	int win, lose;
	int num = 7;
	int j = 1, k = 1, l = 1;
	
	scanf("%d %d", &win, &lose);
	
	num -= (win + lose);
	
	for (int i = num; i > 0; i--) {
		k *= i;
	}
	for (int i = 4 - win; i > 0; i--) {
		j *= i;
	}
	for (int i = 3 - lose; i > 0; i--) {
		l *= i;
	}
	
	printf("%d", (k / (j * l)));


	return 0;
}