#include <stdio.h>

int main() {
	
	int num;
	int fact = 1;

	scanf("%d", &num);
	if (num == 0) {
		fact = 1;
	}
	while (num > 1) {
		fact *= num;
		num -= 2;
	}

	printf("%d", fact);
	return 0;
}