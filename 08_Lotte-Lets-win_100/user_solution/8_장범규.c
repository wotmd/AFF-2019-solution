#include <stdio.h>
int fac(int n) {
	int num = n, i;
	int result = 1;

	for (i = 1; i <= num; i++)
		result *= i;

	return result;
}
int main() {
	int w, d;
	int num, w_n, d_n;
	int result;
	scanf("%d %d", &w, &d);
	num = 7 - (w + d);
	w_n = 4 - w;
	d_n = 3 - d;
	result = fac(num) / (fac(w_n)*fac(d_n));
	printf("%d", result);

	return 0;
}