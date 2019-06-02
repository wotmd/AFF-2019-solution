#include <stdio.h>

int main() {
	long n1, n2, n3, n4;
	int i, gcd = 1;
	int z;
	int count = 0;

	scanf("%ld %ld", &n1, &n2);
	n3 = (n1 >= n2) ? n2 : n1;
	n4 = (n1 >= n2) ? n1 : n2;
	for (i = 2; i <= n3; i++) {
		if (n3%i == 0 && n4%i == 0) {
			gcd = (gcd >= i) ? gcd : i;
			z = i;
		}
		else
			gcd = 1;
	}
	if (z > gcd)
		gcd = z;
	count = 1;
	for (int i = 2; i < gcd; i++) {
		if (gcd%i == 0) {
			count = 0;
			break;
		}
	}
	if (count == 0)
		gcd = 0;

	printf("%d\n", gcd);
	
	return 0;
}