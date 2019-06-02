#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, i, g = 1;
	scanf("%d", &num);
	
	if (num == 0)
		g = 1;
	else if (num%2 == 0) {
		for (i = 2; i <= num; i += 2) {
			g *= i;
		}
	}
	else {
		for (i = 1; i <= num; i += 2) {
			g *= i;
		}
	}
	printf("%d\n", g);
	return 0;
}