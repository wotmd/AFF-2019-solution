#include <stdio.h>
int main() {

	int a, b;
	int num = 0;

	scanf("%d %d", &a, &b);

	for (int i = 1; i <= ((a > b) ? b : a); i++) {
		if ((a % i == 0) && (b % i == 0)) {
			num = i;
		}
	}

	if (num == 1) {
		num = 0;
	}
	if (num == 2) {
		num = 2;
	}
	if (num > 2) {
		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				num = 0;
				break;
			}
		}
	}
	printf("%d\n", num);

	return 0;
}
