#include <stdio.h>

unsigned long long fibo(int n) {
	unsigned long long f1 = 0, f2 = 1, f3;
	for (int i = 0; i < n-1; i++) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;	
	}
	return f3;
}
int main() {
	int num, j, sum = 0;
	char pn[100];
	scanf("%d", &num);
	sprintf(pn, "%llu", fibo(num));
	for (j = 0; j < 100; j++) {
		if (pn[j] == '\0')
			break;
	}
	for (int i = 0; i < j; i++) {
		sum += pn[i] - '0';
	}
	printf("%d\n", sum);
	return 0;
}
